//���� 8-4. �����Ͱ� �ʿ��� ���
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