#include<stdio.h>

void func(int *a)
{
	int i;

	a[0] = 10;
	a[1] = 8;
	a[2] = 12;
	printf("\nfunc 関数 \n");
	for(i = 0;i < 10; i++)
		printf("%4d, a[i]");
}

int main(void)
{
	int i;
	int x[10];

	for(i = 0; i < 10; i++)
		x[i] = i;
	printf("\nfunc 関数を呼び出す前 \n");
	for(i = 0; i < 10; i++)
		printf("%4d", x[i]);
	func(x);
	printf("\nfunc 関数を呼び出した後 \n");
	for(i = 0; i < 10; i++)
		printf("%4d", x[i]);

	return(0);
}
