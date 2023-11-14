#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("xin chao \n");
	printf("chuong trinh tinh cng/n");
	printf("nhap so a:");
	scanf("%d", &a);
	printf("nhap so b:");
	scanf("%d", &b);
	//ham();
	hamTinhCong(a,b);
	//printf("Gia tri: %d",hamTinhCong(a,b));
	return 0;
	
}

ham(){
	printf("Hello");
	return 0;
}

hamTinhCong(int a, int b){
	int c=a+b;
	printf("ket qua: %d",c);
	return a+b;
}
