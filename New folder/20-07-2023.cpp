#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	int[9] player;//mang 1 chieu (1D)
//	
//	player[12];
//	int n;
	
	int array[10];
	int i, tong, soLonNhat;
	for(i=0; i<10; i++)
	{
		printf("\n nhap du lieu: %d : ", i+1);
		scanf("%d",&array[i]);
	}
	for(i=0; i<10; i++)
	{
		int giaTri=array[i];
		printf("\n phan tu mang o vi tri %d la: ", i+1);
		printf("%d", giaTri);
	}
	
	int so1, so2;
	printf("2 so %d va %d",so1,so2);
	printf("2 so %d va %d",so2,so1);
	
	
//	/* Displays highest of the entered values */
//	high = ary[0];
//	for(i=1; i<10; i++)
//	{
//	if(ary[i] > high)
//	high = ary[i];
//	}
//	printf(“\nHighest value entered was %d”, high);
//	/* prints average of values entered for ary[10] */
//	for(i=0,total=0; i<10; i++)
//	total = total + ary[i];
//	printf(“\nThe average of the elements of ary is %d”,total/i);
	
	return 0;
}
