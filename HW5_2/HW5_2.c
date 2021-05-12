#include <stdio.h>
int main(void)
{
	int radius;
	const double PI = 3.141592;
	double area, circumference;

	printf("Enter a radius: ");
	scanf_s("%d", &radius);

	area = radius * radius * PI;
	circumference = radius * 2 * PI;
	printf("The area of a circle with %d:\t\t%f\n", radius, area);
	printf("The circumference of a circle with %d:\t%f", radius, circumference);
}