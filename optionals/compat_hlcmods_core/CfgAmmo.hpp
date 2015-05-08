class CfgAmmo
{
    class B_762x51_Ball;
    class B_556x45_Ball;
    class B_127x99_Ball;
    class B_127x99_Ball_Tracer_Red;
    class HLC_762x51_tracer;
    class HLC_762x51_ball;
    class HLC_556NATO_EPR: B_556x45_Ball
    {
        ACE_caliber=5.69;
        ACE_bulletLength=0.023012;
        ACE_bulletMass=4.0176;
        ACE_ammoTempMuzzleVelocityShifts[]={-27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75};
        ACE_ballisticCoefficients[]={0.151};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
        ACE_barrelLengths[]={0.21082, 0.23876, 0.26924, 0.29972, 0.3302, 0.36068, 0.39116, 0.4191, 0.44958, 0.48006, 0.508, 0.6096};
    };
    class HLC_556NATO_SOST: B_556x45_Ball
    {
        ACE_caliber=5.69;
        ACE_bulletLength=0.023012;
        ACE_bulletMass=4.0176;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.307};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={780, 886, 950};
        ACE_barrelLengths[]={0.254, 0.3937, 0.508};
    };
    class HLC_556NATO_SPR: B_556x45_Ball
    {
        ACE_caliber=5.69;
        ACE_bulletLength=0.023012;
        ACE_bulletMass=4.9896;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.361};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={624, 816, 832, 838};
        ACE_barrelLengths[]={0.1905, 0.3683, 0.4572, 0.508};
    };
    class HLC_300Blackout_Ball: B_556x45_Ball
    {
        ACE_caliber=7.823;
        ACE_bulletLength=0.028397;
        ACE_bulletMass=9.5256;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.398};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={559, 609, 625};
        ACE_barrelLengths[]={0.1524, 0.4064, 0.508};
    };
    class HLC_300Blackout_SMK: HLC_300Blackout_Ball
    {
        ACE_caliber=7.823;
        ACE_bulletLength=0.037821;
        ACE_bulletMass=14.256;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.608};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={300, 320, 340};
        ACE_barrelLengths[]={0.2286, 0.4064, 0.508};
    };
    class HLC_762x39_Ball: HLC_300Blackout_Ball
    {
        ACE_caliber=7.823;
        ACE_bulletLength=0.028956;
        ACE_bulletMass=7.9704;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.275};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={650, 716, 750};
        ACE_barrelLengths[]={0.254, 0.41402, 0.508};
    };
    class HLC_762x39_Tracer: HLC_762x39_Ball
    {
        ACE_caliber=7.823;
        ACE_bulletLength=0.028956;
        ACE_bulletMass=7.5816;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.275};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={650, 716, 750};
        ACE_barrelLengths[]={0.254, 0.41402, 0.508};
    };
    class HLC_762x51_MK316_20in: B_762x51_Ball
    {
        ACE_caliber=7.823;
        ACE_bulletLength=0.031496;
        ACE_bulletMass=11.34;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.243};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={750, 780, 790, 794};
        ACE_barrelLengths[]={0.4064, 0.508, 0.6096, 0.6604};
    };
    class HLC_762x51_BTSub: B_762x51_Ball
    {
        ACE_caliber=7.823;
        ACE_bulletLength=0.034036;
        ACE_bulletMass=12.96;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.235};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={305, 325, 335, 340};
        ACE_barrelLengths[]={0.4064, 0.508, 0.6096, 0.6604};
    };
    class HLC_762x54_ball: HLC_762x51_ball
    {
        ACE_caliber=7.925;
        ACE_bulletLength=0.028956;
        ACE_bulletMass=9.8496;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.4};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={700, 800, 820, 833};
        ACE_barrelLengths[]={0.4064, 0.508, 0.6096, 0.6604};
    };
    class HLC_762x54_tracer: HLC_762x51_tracer
    {
        ACE_caliber=7.925;
        ACE_bulletLength=0.028956;
        ACE_bulletMass=9.6552;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.395};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={680, 750, 798, 800};
        ACE_barrelLengths[]={0.4064, 0.508, 0.6096, 0.6604};
    };
    class HLC_303Brit_B: B_556x45_Ball
    {
        ACE_caliber=7.899;
        ACE_bulletLength=0.031166;
        ACE_bulletMass=11.2752;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.499, 0.493, 0.48};
        ACE_velocityBoundaries[]={671, 549};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={748, 761, 765};
        ACE_barrelLengths[]={0.508, 0.6096, 0.6604};
    };
    class HLC_792x57_Ball: HLC_303Brit_B
    {
        ACE_caliber=8.077;
        ACE_bulletLength=0.028651;
        ACE_bulletMass=12.7008;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.315};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={785, 800, 815};
        ACE_barrelLengths[]={0.508, 0.599948, 0.6604};
    };
    class HLC_542x42_ball: HLC_303Brit_B
    {
    };
    class HLC_542x42_Tracer: HLC_303Brit_B
    {
    };
    class FH_545x39_Ball: B_556x45_Ball
    {
        ACE_caliber=5.588;
        ACE_bulletLength=0.02159;
        ACE_bulletMass=3.42792;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.168};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={780, 880, 920};
        ACE_barrelLengths[]={0.254, 0.41402, 0.508};
    };
    class FH_545x39_7u1: FH_545x39_Ball
    {
        ACE_bulletMass=5.184;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_muzzleVelocities[]={260, 303, 320};
        ACE_barrelLengths[]={0.254, 0.41402, 0.508};
    };
    class HLC_57x28mm_JHP: FH_545x39_Ball
    {
        ACE_caliber=5.69;
        ACE_bulletLength=0.012573;
        ACE_bulletMass=1.8144;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.144};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={550, 625, 720};
        ACE_barrelLengths[]={0.1016, 0.1524, 0.26289};
    };
    class HLC_9x19_Ball: B_556x45_Ball
    {
        ACE_caliber=9.017;
        ACE_bulletLength=0.015494;
        ACE_bulletMass=8.0352;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.165};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={340, 370, 400};
        ACE_barrelLengths[]={0.1016, 0.127, 0.2286};
    };
    class HLC_9x19_M882_SMG: B_556x45_Ball
    {
        ACE_caliber=9.017;
        ACE_bulletLength=0.015494;
        ACE_bulletMass=8.0352;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.165};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={340, 370, 400};
        ACE_barrelLengths[]={0.1016, 0.127, 0.2286};
    };
    class HLC_9x19_GoldDot: HLC_9x19_Ball
    {
        ACE_muzzleVelocities[]={350, 380, 420};
    };
    class HLC_9x19_Subsonic: HLC_9x19_Ball
    {
        ACE_muzzleVelocities[]={300, 320, 340};
    };
    class HLC_10mm_FMJ: HLC_9x19_Ball
    {
        ACE_caliber=12.7;
        ACE_bulletLength=0.019406;
        ACE_bulletMass=10.692;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.189};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={360, 400, 430};
        ACE_barrelLengths[]={0.1016, 0.117094, 0.2286};
    };
    class HLC_45ACP_Ball: B_556x45_Ball
    {
        ACE_caliber=11.481;
        ACE_bulletLength=0.017272;
        ACE_bulletMass=14.904;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.195};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={230, 250, 285};
        ACE_barrelLengths[]={0.1016, 0.127, 0.2286};
    };
    class FH_44Mag: HLC_45ACP_Ball
    {
        ACE_caliber=10.897;
        ACE_bulletLength=0.020422;
        ACE_bulletMass=12.96;
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619};
        ACE_ballisticCoefficients[]={0.172};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={360, 390, 420};
        ACE_barrelLengths[]={0.1016, 0.1905, 0.2286};
    };
    class FH_50BMG_SLAP: B_127x99_Ball
    {
        ACE_caliber=7.823;
        ACE_bulletLength=0.03175;
        ACE_bulletMass=22.68;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={1.056};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={1204};
        ACE_barrelLengths[]={0.7366};
    };
    class FH_50BMG_Raufoss: B_127x99_Ball
    {
        ACE_caliber=12.954;
        ACE_bulletLength=0.060452;
        ACE_bulletMass=42.768;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.670};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ASM";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={817};
        ACE_barrelLengths[]={0.7366};
    };
};
