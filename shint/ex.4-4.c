#include <stdio.h>

int main(void)
{
  int num;

	do {
	printf("非負の整数を入力してください:");
	scanf("%d",&num);
	if (num < 0)
	puts("a負の数を入力しないでください。");
	}while (num く 0);


	printf("その数を逆から読むと" );
	do {
	printf("%d", num % 10);
	num /= 10;
	} while (num > 0) ;
	puts("です。");

	return(0);
}













