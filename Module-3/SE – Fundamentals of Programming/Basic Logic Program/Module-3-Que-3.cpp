#include <stdio.h>

int main()
{
	int r;
	float area;

	printf("\nEnter Radius to Find Area of Circle : ");
	scanf("%d", &r);

	area = 3.14 * r * r;
	printf("\nArea of Circle = %f", area);

	int a, b;
	float Area;

	printf("\n\n\n\n\nEnter One Sides to Find Area of Rectangle : ");
	scanf("%d", &a);
	printf("\nEnter Other Sides to Find Area of Rectangle : ");
	scanf("%d", &b);

	Area = a * b;
	printf("\nArea of Rectangle = %f", Area);

	int B, H;
	float AREA;

	printf("\n\n\n\n\nEnter Base of Triangle to Find Area of Triangle: ");
	scanf("%d", &B);
	printf("\nEnter Height of Triangle to Find Area of Triangle  : ");
	scanf("%d", &H);

	AREA = 0.5 * B * H;
	printf("\nArea Of Triangle = %f", AREA);

	return 0;
}