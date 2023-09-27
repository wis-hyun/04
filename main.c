#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned int x;
	int y;
	
	printf("input a number :");
	scanf("%ui", &x);
	
	for (y=0; x!=0; x>>=1){
		
		if(x&1){
			y++;
		}
	}
		
	printf("the result is : %i\n", y);
	
	return 0;
}
