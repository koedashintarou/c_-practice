#include <stdio.h>

int main(void)
{
	int num;

	do {
	  pintf("非負の整数を入力してください。;);
	  scanf("%d", &num);
	  if (num < 0)
	      puts("\a負の数を入力しないでください。");
	  } while (num < 0);

	  printf("その数を逆から読むと");
	  do {
	    printf("%d", num % 10);
	    num = num / 10;
	  } while (num > 0);
	  puts("です");
	  puts("読み込まれた値は %d です")

  	return(0);

	}













