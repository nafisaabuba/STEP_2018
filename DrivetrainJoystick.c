#pragma config(Motor,  port2,           frontRightMotor, tmotorServoContinuousRotation, openLoop, reversed, driveRight)
#pragma config(Motor,  port3,           backRightMotor, tmotorServoContinuousRotation, openLoop, reversed, driveRight)
#pragma config(Motor,  port4,           frontLeftMotor, tmotorServoContinuousRotation, openLoop, driveLeft)
#pragma config(Motor,  port5,           backLeftMotor, tmotorServoContinuousRotation, openLoop, driveLeft)

/*----------------------------------------------------------------------------------------------------*\
|*                                   - Moving Forward with 4 Motors -                                 *|
|*                                      
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
	while (1 == 1)
	{	
		motor[frontRightMotor] = (vexRT[Ch2] + vexRT[Ch1])/2;
		motor[backRightMotor] = (vexRT[Ch2] + vexRT[Ch1])/2;
		motor[frontLeftMotor] = (vexRT[Ch2] - vexRT[Ch1])/2;
		motor[backLeftMotor] = (vexRT[Ch2] - vexRT[Ch1])/2;
	}
}			
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
