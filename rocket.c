#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	
	//creating a random number function for temperature control system using rand function,assuming time=1 hr(3600 sec) it will produce 36000 random numbers between 30 and 300//

	int temp;
	int i;
	int temp_lower=30;
	int temp_upper=300;
	int counter=0;
	int unique_id;
	for(i=0;i<=3600;i++)
	{
		temp=(rand()%(temp_upper-temp_lower+1))+temp_lower;
		printf("%d",temp);
		counter++;
		unique_id=counter;
		printf("%d",unique_id);


	}
int temperature_thrusters()
{


//creating a random number function for temperature of thrusters using rand function,assuming time=1 hr(3600 sec) it will produce 36000 random numbers between -100 and 100//

	int temp_th;
        int j;
        int tempth_lower=-100;
        int tempth_upper=100;
        for(j=0;j<=3600;j++)
        {
                temp_th=(rand()%(tempth_upper-tempth_lower+1))+tempth_lower;
                printf("%d",temp_th);
		counter++;
                unique_id=counter;
                printf("%d",unique_id);

	}

	}
//creating a random number function for temperature control system using rand function,assuming time=1 hr(3600 sec) it will produce 36000 random numbers between 30 and 300//
int accleration_rocket()
{
	int acc;
        int k;
        int acc_lower=2;
        int acc_upper=20;
        for(k=0;k<=3600;k++)
        {
                acc=(rand()%(acc_upper-acc_lower+1))+acc_lower;
                printf("%d",acc);
		counter++;
                unique_id=counter;
                printf("%d",unique_id);

	}
}
//creating a random number function for temperature control system using rand function,assuming time=1 hr(3600 sec) it will produce 36000 random numbers between 0 and 360//

int gyro_rocket()
{
	int gyro;
        int l;
        int gyro_lower0;
        int gyro_upper=360;
        for(l=0;l<=3600;l++)
        {
                gyro=(rand()%(gyro_upper-gyro_lower+1))+gyro_lower;
                printf("%d",gyro);
		counter++;
                unique_id=counter;
                printf("%d",unique_id);

	}
}


// server side programming temperature and acceleration will be obtained by the data base//
void temp_analysis()
{
	int temp;//recieved from data base//
	int temp_th;//recieved from data base//
	if((temp>220)&&(temp_th>50)&&(temp_th<60))
	{
		printf("rocket is on fire");
	}
	else
		printf("trajectory is normal");

}


void rotation_analysis()
{
        int acc;//recieved from data base//
        int gyro;//recieved from data base//
        if((acc>16))
        {
                printf("spinning out of control");
        }
        else
                printf("trajectory is normal");


}




}








