//예제 8-4 (2). 포인터의 사용
#include <stdio.h>
int main()
{
	//포인터를 사용하지 않을 경우
	/*int a = 20, b = 40;
	int result = 0, rate = 50, extra = 2, some_value = 0;
	if (a>b)
	{
		result = a * rate + extra;
		a = some_value;
	}
	else
	{
		result = b * rate + extra;
		b = some_value;
	}*/

	//포인터를 사용할 경우 => 보다 간결해짐.
	int a = 20, b = 40;
	int* p;
	int result = 0, rate = 50, extra = 2, some_value = 0;

	if (a > b)
	{
		*p = a;
	}
	else
	{
		*p = b;
	}
	result = *p * rate + extra;
	*p = some_value;
}