#include <stdio.h>
int main(void)
{
	const double PI = 3.141592;
	int radius;
	double area;

	printf("Enter a radius: ");
	scanf_s("%d", &radius);
	area = radius * radius * PI;

	printf("The area of a circle with %d:\t%f.", radius, area);
}