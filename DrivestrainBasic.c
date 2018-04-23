#pragma config(Motor,  port2,           frontRightMotor, tmotorNormal, openLoop)
#pragma config(Motor,  port3,           backRightMotor, tmotorNormal, openLoop)
#pragma config(Motor,  port4,           frontLeftMotor, tmotorNormal, openLoop)
#pragma config(Motor,  port5,           backLeftMotor, tmotorNormal, openLoop)

/*----------------------------------------------------------------------------------------------------*\
|*                                   - Moving Forward with 4 Motors -                                 *|
|*                                                                                                    *|
|*    MOTORS & SENSORS:                                                                               *|
|*    [I/O Port]          [Name]                [Type]                [Description]                   *|
|*    Motor Port 2        frontRightMotor       VEX 3-wire module     Right side motor                *|
|*    Motor Port 3        backRightMotor        VEX 3-wire module     Right side motor                *|
|*    Motor Port 4        frontLefttMotor       VEX 3-wire module     Left side motor                 *|
|*    Motor Port 5        backLeftMotor         VEX 3-wire module     Left side motor                 *|
\*----------------------------------------------------------------------------------------------------*/

//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++
task main()
{
	while (true)
	{
		motor[frontRightMotor] = vexRT[Ch1];
		motor[backRightMotor] = vexRT[Ch1];
		motor[frontLeftMotor] = vexRT[Ch1];
		motor[backLeftMotor] = vexRT[Ch1];

		if (vexRT[Ch1] == 1)
		{
			motor[frontRightMotor] = 127;
			motor[backRightMotor] = 127;
			motor[frontLeftMotor] = 127;
			motor[backLeftMotor] = 127;
		} else
		{
			motor[frontRightMotor] = 0;
			motor[backRightMotor] = 0;
			motor[frontLeftMotor] = 0;
			motor[backLeftMotor] = 0;
		}
	}
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
