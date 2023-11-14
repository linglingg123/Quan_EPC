#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Student{
	char name[20];
	int eng; //English grade [0, 100]
	int maths; //maths grade [0, 100]
};
int main(int argc, char *argv[]) {
	Student s[5]={
		("a",10,100), //s[0].eng
		("b",1,10),   //s[1]
		("c",0,10),
		("d",6,10),
		("e",9,10),
		("odfsdf",9,10)
	} ;
	
	int i,y; Student caoDiemNhat;
	for(i=0;i<=5;i++){
		for(y=0;y<=5;y++){
			if((s[i].eng+s[i].maths)>(s[y].eng+s[y].maths)){
				caoDiemNhat=s[i];
			}
		}
	}
	printf("Cao diem nhat: %s", caoDiemNhat.name);
	return 0;
}
