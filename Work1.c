#include <stdio.h>
#include <math.h>

int main() {
	double x;//=37.15;
	double y;//=-12.55;
	double a;
	

	
	printf("Write X= ");
    scanf_s("%lf", &x);
    printf("Enter Y= ");
    scanf_s("%lf", &y);

	
	a=pow(x+pow(fabs(y),1.0/4),1.0/3);
	
	printf("%lf", a);
	return 0;
}
