//���� 8-4 (2). �������� ���
#include <stdio.h>
int main()
{
	//�����͸� ������� ���� ���
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

	//�����͸� ����� ��� => ���� ��������.
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