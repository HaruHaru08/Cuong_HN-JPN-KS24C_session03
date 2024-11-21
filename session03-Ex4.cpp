#include<stdio.h>

int main(){
	float manth,literature,english,sum,medium;
	printf("nhap diem toan: ");
	scanf("%f",&manth);
	
	printf("nhap diem van: ");
	scanf("%f",&literature);
	
	printf("nhap diem anh: ");
	scanf("%f",&english);
	
	sum = manth + literature + english;
	
	medium = sum / 3;
	
	printf("Tong diem ba mon la: %.2f\n",sum);
	printf("Diem trung binh ba mon la: %.2f\n",medium);
	return 0;
}