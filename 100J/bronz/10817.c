//세 정수 A, B, C가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오. 
#include<stdio.h>
int main(void)
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if (A>B)
	{
		if (A>C)
		{
			if (B>C)	printf("%d", B);
			else 		printf("%d", C);
		}
		else			printf("%d", A);
	}
	else
	{
		if (A>C)		printf("%d", A);
		else
		{
			if (B > C)	printf("%d", C);
			else		printf("%d", B);
		}
	}
	return 0;
}