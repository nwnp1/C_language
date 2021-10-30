#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	int num;
	double grade;

}Student;

void print_data(Student* ps)
{
	printf("%d\n", ps->num);
	printf("%.1lf\n", ps->grade);
}

int main(void)
{
	Student s1 = { 315, 4.2 };

	print_data(&s1);

	return 0;
}