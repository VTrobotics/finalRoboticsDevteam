#pragma config(Motor,  port1,           rightMogo,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           rightDrive,    tmotorVex393_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port3,           rightLift,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           leftLift,      tmotorNone, openLoop)
#pragma config(Motor,  port9,           leftDrive,     tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port10,          leftMogo,      tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int a;

void driver() {
	if (vexRT[Btn7U]) {
		a = -1;
	}

	else if (vexRT[Btn7D]) {
		a = 1;
	}

	motor[rightDrive] = a * vexRT[Ch2];
	motor[leftDrive] = a * vexRT[Ch3];

	if (vexRT[Btn5D]) {
		motor[rightMogo] = 100;
		motor[leftMogo] = 100;
	}

	else if (vexRT[Btn6D]) {
		motor[rightMogo] = -100;
		motor[leftMogo] = -100;
	}

	else {
		motor[rightMogo] = 0;
		motor[leftMogo] = 0;
	}

	if (vexRT[Btn5U]) {
		motor[rightLift] = 90;
		motor[leftLift] = 90;
	}

	else if (vexRT[Btn6U]) {
		motor[rightLift] = -90;
		motor[leftLift] = -90;
	}

	else {
		motor[rightLift] = 0;
		motor[leftLift] = 0;
	}
	if (vexRT[Btn8U]) {
		motor[claw] = 90;
	}
	else if (vexRT[Btn8D]) {
		motor[claw] = -90;
	}
	else {
		motor[claw] = 0;
	}
}

void auton() {


}
task main()
{
while(1 == 1) {
	driver();
}
}
