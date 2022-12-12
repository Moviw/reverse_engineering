#include <Windows.h>
#include<stdio.h>
int __cdecl fun1(int a, int b)
{
	return a + b;
}
int main()
{
	printf("123");
	int sum = fun1(3, 6);
	printf("456");


}