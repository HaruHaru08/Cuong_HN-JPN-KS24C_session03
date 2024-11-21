#include<stdio.h>

int main(){
	float pi =3.14;
	float r,perimeter,acreage;
	printf("Nhap ban kinh:");
	scanf("%f",&r);
	perimeter = 2*pi*r;
	acreage =pi*r*r;
	printf("Chu vi hinh tron la: %.2f\n",perimeter);
	printf("Dien tich hinh tron la: %.2f",acreage);
	return 0;
}