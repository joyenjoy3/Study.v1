#include <stdio.h>

struct Student 
{
	char name[30];
	int no;
	int grade;
	int classNum;
};

int main() {

	char name[30];
	int no;
	int grade;
	int classNum;

	char names[100][30];
	int noArray[100];
	int gradeArray[100];
	int classNumArray[100];

	struct Student a;
	{

		a.name[0] = 'M';
		a.name[1] = 'O';
		a.name[2] = 'N';
		a.name[3] = '\n';

		a.no = 123123123;

		a.grade = 2;

		a.classNum = 11;

		printf("�̸�: %s, �й�: %d, �г�: %d, ��: %d\n", a.name, a.no, a.grade, a.classNum);
	};


	return 0;
}