#include<stdio.h>
#include"Calculation.h" 


int main() {
	Calculation<int, int>       num1(1, 2);
	Calculation<float, float>   num2(3.1f, 2.9f);
	Calculation<double, double> num3(4.5, 4.56);
	Calculation<int, float>     num4(4, 4.5f);
	Calculation<int, double>    num5(4, 3.99);
	Calculation<double, float>  num6(4.21, 4.5f);

	printf("%d\n", num1.Min());
	printf("%3.2f\n", num2.Min());
	printf("%lf\n", num3.Min());
	printf("%d\n", num4.Min());
	printf("%d\n", num5.Min());
	printf("%lf\n", num6.Min());

	return 0;
}