#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//ex1(); 
	ex2();
	return 0;
}

void ex1(){
	int ary[10];
	int i, total, high;
	for(i=0; i<10; i++)
	{
		printf("\n Enter value: %d : ", i+1);
		scanf("%d",&ary[i]);
	}
	/* Displays highest of the entered values */
	high = ary[0];
	for(i=1; i<10; i++)
	{
		if(ary[i] > high){
			high = ary[i];
		}
	}
	printf("\nHighest value entered was %d \n", high);
	/* prints average of values entered for ary[10] */
	for(i=0,total=0; i<10; i++){
		total = total + ary[i];
	}
	printf("total=%d",total);
}

void ex2(){
	char alpha[26];
	int i, j;
	for(i=65,j=0; i<91; i++,j++)
	{
		alpha[j] = i;
		printf("The character now assigned is %c \n", alpha[j]);
	}
	getchar();
}

void charSort(){
	char word[20];
	
	printf("Enter")
}
