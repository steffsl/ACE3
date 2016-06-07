/*
 * Author: Zapat, Dslyecxi, Jonpas
 * Draws throw arc.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ace_advancedthrowing_fnc_drawArc
 *
 * Public: No
 */
#include "script_component.hpp"

// Disable drawing when intersecting with the vehicle
if (!([ACE_player] call FUNC(canThrow))) exitWith {
    drawIcon3D ["\a3\ui_f\data\igui\cfg\actions\obsolete\ui_action_cancel_manualfire_ca.paa", [1, 0, 0, 1], positionCameraToWorld [0, 0, 1], 1, 1, 0, "", 1];
};

if (isNull GVAR(activeThrowable)) exitWith {};

private _direction = [THROWSTYLE_NORMAL_DIR, THROWSTYLE_HIGH_DIR] select (GVAR(throwType) == "high" || {GVAR(dropMode)});
private _velocity = [GVAR(throwSpeed), GVAR(throwSpeed) / THROWSTYLE_HIGH_VEL_COEF] select (GVAR(throwType) == "high");
_velocity = [_velocity, THROWSTYLE_DROP_VEL] select GVAR(dropMode);

private _viewStart = AGLToASL (positionCameraToWorld [0, 0, 0]);
private _viewEnd = AGLToASL (positionCameraToWorld _direction);

private _initialVelocity = (vectorNormalized (_viewEnd vectorDiff _viewStart)) vectorMultiply (_velocity / 1.8);
private _prevTrajASL = getPosASLVisual GVAR(activeThrowable);

private _pathData = [];

for "_i" from 0.05 to 1.45 step 0.1 do {
    private _newTrajASL = _prevTrajASL vectorAdd (_initialVelocity vectorMultiply _i) vectorAdd ([0, 0, -4.12] vectorMultiply (_i * _i));
    private _cross = 0;

    if (_newTrajASL distance (getPosASLVisual ACE_player) <= 20) then {
        if ((ASLToATL _newTrajASL) select 2 <= 0) then {
            _cross = 1
        } else {
            // Even vanilla throwables go through glass, only "GEOM" LOD will stop it but that will also stop it when there is glass in a window
            if (lineIntersects [_prevTrajASL, _newTrajASL]) then {
                _cross = 2;
            };
        };

        private _iDim = linearConversion [20, 0, _newTrajASL distance (getPosASLVisual ACE_player), 0.3, 2.5, true];
        private _alpha = linearConversion [20, 0, _newTrajASL distance (getPosASLVisual ACE_player), 0.05, 0.7, true];
        private _movePerc = linearConversion [3, 0, vectorMagnitude (velocity ACE_player), 0, 1, true];
        _alpha = _alpha * _movePerc;

        private _col = [ [1, 1, 1, _alpha], [0, 1, 0, _alpha], [1, 0, 0, _alpha] ] select _cross;

        if (_cross != 2 && lineIntersects [eyePos ACE_player, _newTrajASL]) then {
            _col set [3, 0.1]
        };

        _pathData pushBack [_col, ASLToAGL _newTrajASL, _iDim];
    };

    if (_cross > 0) exitWith {};

    _prevTrajASL = _newTrajASL;
};

reverse _pathData;
// To get the sort order correct from our POV, particularly when using outlined dots
{
    _x params ["_col", "_newTrajAGL", "_iDim"];
    drawIcon3D ["\a3\ui_f\data\gui\cfg\hints\icon_text\group_1_ca.paa", _col, _newTrajAGL, _iDim, _iDim, 0, "", 2];
} forEach _pathData;