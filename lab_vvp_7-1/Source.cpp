#include <stdio.h>
#include <math.h>
int main()
{
	float alpha, pi, answ;
	pi = 180;
	printf("Enter alpha (0 < a < 360): ");
	scanf("%f", &alpha);
	if (alpha < 0 || alpha > 360)
		printf("Alpha out of bounds !!! ");
	else
		answ = alpha / pi;
		printf("Answer is: ");
		printf("%f", answ);


}