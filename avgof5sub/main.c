#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mth=0;
	int eng=0;
	int chem=0;
	int phy=0;
	int art=0;
	int sum=0;
	float avg=0.0;

	printf("Enter your marks down below:\n");

	//taking all marks as input

	printf("Enter Maths marks:");
	scanf("%d", &mth);

	printf("Enter English marks:");
	scanf("%d", &eng);

	printf("Enter Chemistry marks:");
	scanf("%d", &chem);

	printf("Enter Physics marks:");
	scanf("%d", &phy);

	printf("Enter Arts marks:");
	scanf("%d", &art);

	//calculations

	sum=mth+eng+chem+phy+art;
	avg=sum/5;

	printf("Average is : %0.2f",avg);

    return 0;
}
