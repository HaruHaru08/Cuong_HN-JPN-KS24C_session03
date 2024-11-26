#include <stdio.h>

int main(){
	int number,sum,reverse,thousand,hundred,ten,unit;
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d",&number);
	thousand= number/1000;
	hundred =(number/100)%10;
	ten=(number/10)%10;
	unit= number%10;
	reverse= unit*1000+ten*100+hundred*10+thousand;
	printf("So nguoi dung nhap vao la: %d\n",number);
	printf("So dao nguoc cua so %d la: %d\n",number,reverse);
	return 0;
}