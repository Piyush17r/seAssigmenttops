#include <stdio.h>

int main()
{
	int a, b, c, d, e, ans;

	printf("\nEnter A = ");
	scanf("%d", &a);
	printf("\nEnter B = ");
	scanf("%d", &b);
	printf("\nEnter C = ");
	scanf("%d", &c);
	printf("\nEnter D = ");
	scanf("%d", &d);
	printf("\nEnter E = ");
	scanf("%d", &e);

	ans = a + b + c + d + e;
	printf("\nAddition = %d", ans);
	ans = a - b - c - d - e;
	printf("\nSubstraction = %d", ans);
	ans = a * b * c * d * e;
	printf("\nMultiplication = %d", ans);
	ans = a / b / c / d / e;
	printf("\nDivision = %d", ans);
	ans = a % b % c % d % e;
	printf("\nRemainder = %d", ans);

	return 0;
}
