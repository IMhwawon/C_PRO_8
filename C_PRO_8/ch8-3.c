//예제 8-3. 포인터의 사용
#include <stdio.h>
int main()
{
	int a = 10;
	int* p = &a;

	printf("a=  %d\n",a);
	printf("&a= %p\n",&a); //주소연산자 &
	
	printf("p=  %p\n", p);
	printf("*p= %d\n", *p); //역참조연산자 *
	printf("&p= %p\n", &p);

	*p = 20;
	printf("*p= %d\n", *p);
}