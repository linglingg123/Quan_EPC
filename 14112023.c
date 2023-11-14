#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Result{
	float math;
	float physics;
	float chemistry;
};

struct Student{
	char name[25];
	char province[25];
	int birth_year;
	struct Result mark;
};

void input(int num, struct Student s[num]){
	
			s[num]; int i;
			for(i = 0; i<=num-1; i++){
				printf("Enter student no %d: \n", i+1);
				printf("Enter name: ");
				scanf("%s", &s[i].name);
				printf("Enter birth year: ");
				scanf("%d", &s[i].birth_year);
				while(2023 - s[i].birth_year <= 18 || 2023 - s[i].birth_year >= 45){
					printf("Enter birth year again: ");
					scanf("%d", &s[i].birth_year);
				};
				printf("Enter province: ");
				scanf("%s", &s[i].province);
				
				printf("Enter marks: \n");
				printf("Maths: ");
				scanf("%f", &s[i].mark.math);
				printf("chemistry: ");
					scanf("%f", &s[i].mark.chemistry);
					printf("physics: ");
					scanf("%f", &s[i].mark.physics);
				while(s[i].mark.math<0 || s[i].mark.math >10){
					printf("Enter again: ");
					printf("Maths: ");
					scanf("%f", &s[i].mark.math);
				};
				while(s[i].mark.chemistry<0 || s[i].mark.chemistry >10){
					printf("Enter again: ");
					printf("chemistry: ");
					scanf("%f", &s[i].mark.chemistry);
				};
				while(s[i].mark.physics<0 || s[i].mark.physics >10){
					printf("Enter again: ");
					printf("physics: ");
					scanf("%f", &s[i].mark.physics);
				};
			}
	
	for(i = 0; i<=num-1; i++){
		printf("Student[%d]: \n", i+1);
		printf("Name: %s \n", s[i].name);
		printf("Birth year: %d \n", s[i].birth_year);
		printf("province: %s \n", s[i].province);
		printf("maths: %f \n", s[i].mark.math);
		printf("physics: %f \n", s[i].mark.physics);
		printf("chemistry: %f \n", s[i].mark.chemistry);
	}
}

void sortStudent(int num, struct Student s[num]){
	int i,y;
	for(i=0;i<num;i++){
		int tong1=s[i].mark.math+s[i].mark.physics+s[i].mark.chemistry;
		for(y=0; y<num; y++){
			int tong2=s[y].mark.math+s[y].mark.physics+s[y].mark.chemistry;
			struct Student mid;
			if(tong2 < tong1){
				mid=s[i];
				s[i]=s[y];
				s[y]=mid;
			}
		}
	}
	for(i = 0; i<=num-1; i++){
		printf("Student[%d]: \n", i+1);
		printf("Name: %s \n", s[i].name);
		printf("Birth year: %d \n", s[i].birth_year);
		printf("province: %s \n", s[i].province);
		printf("maths: %.2f \n", s[i].mark.math);
		printf("physics: %.2f \n", s[i].mark.physics);
		printf("chemistry: %.2f \n \n", s[i].mark.chemistry);
	}
}
typedef struct Str{
	char str[100];
	int count;
};
void analyzeStudent(int num, struct Student s[num]){
	int i, diffProv; Str y[20];
	
	for(i=0;i<=num;i++){
//		if(y[0])
			y[0].str=s[i].province;
			y[0].count++;
		if(y[])
	}
}

int main(int argc, char *argv[]) {
	printf("+------------------------------------------------------------------+");
	printf("| 				STUDENT EXAM RESULT MANAGEMENT PROGRAM 			   |");
	printf("+------------------------------------------------------------------+");
	printf("|1. Input |2. Sort |3. Analyze |4. Find |5. Save |6. Open |7. Exit |");
	printf("+------------------------------------------------------------------+");
	
	int choice; char menuchoice='y';
	struct Student s[100];
	
	while(menuchoice=='Y' || menuchoice=='y'){
		printf("Enter choice: ");
		scanf("%d", &choice);
		switch(choice){
		case 1:
			printf("Enter num of students: ");
			int num=0;
			scanf("%d", &num);
			input(num,s);
			break;
		case 2:
			sortStudent(num,s);
			break;
		case 3:
			break;
		default:
			//printf...
			printf("dksbf");
			break;
		}
		printf("Enter again?");
		scanf(" %c", &menuchoice);
	};
	
	
	return 0;
}
