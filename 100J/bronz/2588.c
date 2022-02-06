// (세 자리 수) × (세 자리 수)의 과정을 보이는 프로그램을 작성하시오.
#include<stdio.h>
int main(void)
{
	int first, last, a, b, c,d;
	scanf("%d %d", &first, &last);
	a = first * (last % 10);
	b = first * ((last / 10) - (last / 100) * 10);
	c = first * (last / 100);
	d = a + b * 10 + c * 100;
	printf("%d\n%d\n%d\n%d",a,b,c,d);
    
    return 0;
}