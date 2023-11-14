#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	char n='n';//char: 1 ki tu
//	char name[20];//name -> string[20]
//    printf("Enter name: ");
//    scanf("%s", name);
//    printf("Your name is %s.", name);
    
    
    int tong; char mang[];
	printf("nhap chuoi: ");
	scanf("%s",&mang);
	tong = sizeof(mang)/sizeof(mang[0]);
	printf("ket qua: %d",tong);
	
	return 0;
}
