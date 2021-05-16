//예제 8-1. 포인터의 바이트 크기 구하기
#include <stdio.h>
int main()
{
	int* pi;
	double* pd;
	char* pc;

	printf("sizeof(pi) = %d\n", sizeof(pi));
	printf("sizeof(pd) = %d\n", sizeof(pd));
	printf("sizeof(pc) = %d\n", sizeof(pc));

	printf("sizeof(int *) = %d\n", sizeof(int*));
	printf("sizeof(double *) = %d\n", sizeof(double*));
	printf("sizeof(char *) = %d\n", sizeof(char*));
}