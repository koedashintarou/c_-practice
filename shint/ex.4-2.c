#include <stdio.h>

int main(void)
{
	int num;
        int dig;

	do {
	printf("�񕉂̐�������͂��Ă�������: ") ;
	scanf("%d", &num) ;
	if (num �� O)
	puts( "\a���̐�����͂��Ȃ��ł��������B" );
	  } while (num < 0);

	 dig=0;
	do {
	num=num / 10; 
	dig = dig + 1;
	} while (num > 0) ;
	printf("���̐���%d���ł��B\n"�C dig) ;
	puts("�ǂݍ��܂ꂽ�l�� %d �ł�")

  	return(0);

	}












