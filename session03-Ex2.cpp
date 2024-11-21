#include<stdio.h>

int main(){
	float degreesCelsius,degreesFahrenheit;
	printf("Nhap nhiet do hien tai:");
	scanf("%f",&degreesCelsius);
	degreesFahrenheit = degreesCelsius * 1.8000 + 32.00;
	printf("Do C chuyen sang do F la: %f",degreesFahrenheit);
	return 0;
}