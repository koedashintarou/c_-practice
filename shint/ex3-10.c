#include <stdio.h>

int main(void)
{
int n1, n2;

puts("二つの整数を入力してください:");
printf("整数A:")  scanf("%d", &n1);
printf("整数B:")  scanf("%d", &n2);


if(n1 - n2 <=  10 || n2 - n1 <=  10 )
  puts("それらの差は10以下です｡");
else  
  puts("それらの差は11以上です｡");






return(0);


}








