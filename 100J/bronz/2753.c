//연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
//윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때 이다.
#include<stdio.h>
int main(void)
{
    int year, refo, rehn, refh;
    scanf("%d",&year);
    refo=year%4, rehn=year%100, refh=year%400;
    if(refo==0&&rehn||refh==0)   printf("1");
    else                         printf("0");
    
    return 0;
}