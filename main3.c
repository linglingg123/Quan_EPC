#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	FILE *file;
	
	//file=fopen("D:\\C\\files\\newprogram.txt","w");
	file=fopen("D:\\C\\files\\newprogram.txt","r");
	
//	printf("Nhap so: \n");
//	scanf("%d",&num);

	//fprintf(file,"%d",num);
   	//fscanf(file,"%d", &num);
   	printf("%d", num);
   	
   	fclose(file);
	return 0;
}
