#pragma config(Sensor, in1,    A,              sensorAnalog)
#pragma config(Sensor, in2,    B,              sensorAnalog)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int sts;
task main()
{
	sts = 0;
	if(SensorValue[A] > 1900)
	{
		if (SensorValue[B] <500)
		{
			motor[port2] = 63;
			if(SensorValue[A] > 1900)
			{
				if (SensorValue[B] <500)
				{
					sts =1;
				}
			}
			else
			{
			motor[port2] = -127;
			wait1Msec(1000);
			}
		}
	}




}
