#pragma config(Motor,  port2,           frontRightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           frontLeftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           backRightMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           backLeftMotor,     tmotorVex393_MC29, openLoop)

task main()
{
	while(true)
 	{
	  	motor[frontRightMotor] = vexRT[Ch2]; 
  		motor[frontLeftMotor] = vexRT[Ch3];

 	//if(vexRT[Btn8U] == 1)
 	//{
 	//	motor[frontRightMotor] = 40;
 	//}
 	//else if(vexRT[Btn8D] == 1)
 	//{
 	//	motor[frontRightMotor] = -40;
 	//}
	}
}
