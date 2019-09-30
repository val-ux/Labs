#include <stdio.h>
#include <stdlib.h>

extern int f1();


extern int f2();

int main()
{
	int n;
	printf("Введите значение:");
	scanf("%d",&n);
	printf("Квадрат значения = %d\n", f1(n));
	printf("Значение умноженное на 2 = %d\n",f2(n));

	return 0;
}
