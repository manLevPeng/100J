// 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.
// A가 B보다 큰 경우에는 '>'를, 작은 경우에는 '<'를, 같은 경우에는 '=='를 출력한다.
#include<stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b)        printf(">");
    else if (a<b)   printf("<");
    else if (a==b)  printf("==");
    
    return 0;
}