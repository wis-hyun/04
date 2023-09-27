#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int y;
	
	printf("input the year :");
	scanf("%i", &x);
	
	if ((x%4==0 && x%100!=0)||(x%400==0))
	{
		y=1;
	}

	else
	{
		y=0;
	}
		
	printf("is the year %i the leap year? : %i", x, y);
	
	return 0;
}
