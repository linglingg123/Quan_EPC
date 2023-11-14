#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=10;
	int i;
	float f = 567.768;
	
	printf("int n = %d \n",n);
	printf("float f = %1.7f \n",f);
	
//	printf("nhap so:  ");
//	scanf("%d", 	&i);
//	
//	printf("so cua minh la: %d",i);
	
//	int a;
//	float d;
//	char ch, name[40];
//	
//	printf("Please enter the data\n");
//	scanf("“%d %f %c %s”", &a, &d, &ch, name);
//	
//	printf("\n The values accepted are :%d, %f, %c, %s ", a, d, ch, name);
	
	
	//char name[6]; //string
//	getchar("%c",name);
//	putchar("%c", name);


	int nhapSo; //khai bao bien
	printf("Nhap so thich hop: "); //in ra chuoi minh muon trong ngoac kep
	scanf("%d", &nhapSo);// nhap lieu vao bien nhapSo cho ng dung

	if(nhapSo==10 || nhapSo==9 && nhapSo>0){ //vong dieu kien
	//trong ngoac don la dieu kien
	//khi dieu kien dung, tat ca cau lenh ben trong vong dieu kien do duoc thuc thi
		float nhapSoF;
		printf("Nhap so thich hop: ");
		scanf("%f", &nhapSoF);
		printf("Hello");
		if(nhapSoF>10){
			printf("nhapSoF > nhapSo");
		}
	} else if(nhapSo<10){
		//phan biet nhieu dieu kien khac nhau
		printf("goodbye");
	}else if(nhapSo>10){
	 	printf("umbala");
	}
	 else { //nhung truong hop con lai
		printf("nono");
	}
	
	printf("Chuong trinh nhap lua chon \n");
	char c;
	printf("Nhap lua chon: ");
	scanf("%c", &c); //nhap chu
	switch(c){ //thay doi 
		case 'y':
			printf("yes sir");
			break;
		case 'n':
			 printf("nono");
			 break;
		default:
			printf("khong hieu");
			break;
	}
	
	
//	for(){
//	}
	
	return 0;
}
