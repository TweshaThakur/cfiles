//program to calculate simple interest//
#include <stdio.h>
int main(){
	//initialztion and declaration//
	int rate;
	int principle;
	int time;
	float si;
	
	si=(rate*principle*time)/100;
	
	printf("Enter the values: \n");
	scanf("Rate :%d\n",&rate);
	scanf("Principle: %d\n",&principle);
	scanf("Time in years : %d\n",&time);
	
	printf("Simple Interest is : %.3f",si);
	
	return 0;
}
