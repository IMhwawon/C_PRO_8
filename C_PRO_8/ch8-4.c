//예제 8-4. 포인터가 필요한 경우
#include <stdio.h>
void test1(int* p)
{
	*p = 20;
}
int main()
{
	int a = 10;
	test1(&a);
	printf("a = %d\n", a);
}