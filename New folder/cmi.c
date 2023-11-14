#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//b1
	float inch=3;
	
	//b2
	printf("Enter the distance in inches: ");
	scanf("%f", &inch);
	float cm=inch*2.54;
	//3
	printf("%.2f inches = %.2f cm", inch, cm);
	
	return 0;
}
