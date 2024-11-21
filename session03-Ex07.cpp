#include<stdio.h>

int main(){
	int n;
	int sum = 0;
	printf("Hay nhap so nguyen co bon chu so: ");
	scanf("%d",&n);
	if(n<1000||n>9999){
		printf("So khong hop le hay khoi tao lai chuong trinh de nhap lai.");
	}
	else{
		for(int i = 0;i < 4;i++){
			sum += n % 10;
			n/=10;
		}
		printf("Tong cua bon so nguyen la: %d",sum);
	}
	return 0;
}