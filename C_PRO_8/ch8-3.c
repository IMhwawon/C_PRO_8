//���� 8-3. �������� ���
#include <stdio.h>
int main()
{
	int a = 10;
	int* p = &a;

	printf("a=  %d\n",a);
	printf("&a= %p\n",&a); //�ּҿ����� &
	
	printf("p=  %p\n", p);
	printf("*p= %d\n", *p); //������������ *
	printf("&p= %p\n", &p);

	*p = 20;
	printf("*p= %d\n", *p);
}