#include <stdio.h>
#include <stdint.h>


typedef struct student {
    uint8_t name[50];
    uint8_t age;
    uint8_t address[50];
    float   point;
}student;

void input_data(student *A);
void display_data(student *A);

int main()
{
	/*3 student in class*/
	student My_student[3];
	/**/
	student *ptr = NULL;
	/*index of for loop*/
	int i;
	/*Soluion*/
	for(i = 0; i < 3 ; i ++){
		printf("Student %d\n",i + 1);
		ptr = &My_student[i];
		printf("USER INPUT \n");
		input_data(ptr);
		printf("COMPUTER DISPLAY: \n");
		display_data(ptr);
		printf("\n____________________\n");
	}
	return 0;
}

void input_data(student *A){
	printf("Input name: ");
	fflush(stdin);
	gets(A->name);
	printf("Input age: ");
	scanf("%d", &A->age);
	printf("Input address: ");
	fflush(stdin);
	gets(A->address);
	printf("Input point: ");
	scanf("%f", &A->point);
}

void display_data(student *A)
{
	printf("Name:  %s\n", A->name);
	printf("Age:  %d\n", A->age);
	printf("Address:  %s\n", A->address);
	printf("Point:  %f\n", A->point);
}


