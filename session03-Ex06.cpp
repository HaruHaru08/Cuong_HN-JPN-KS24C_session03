#include<stdio.h>

int main(){
	float length,height,acreage;
	printf("nhap chieu dai: ");
	scanf("%f",&length);
	printf("nhap chieu cao: ");
	scanf("%f",&height);
	acreage = (length * height)/2;
	printf("Dien tich tam giac la: %f",acreage);
	return 0;
}