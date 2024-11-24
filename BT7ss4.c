#include<stdio.h>

int main(){
// B1 Khai bao bien year
	int year;
// B2 Nhap gai tri cho bien year
	printf("Nhap so nam: ");
	scanf("%d", &year);
// B3 Xu ly dieu kien cho bien year va in ra man hinh	
	if(year%4==0 && year%100!=0 || year%400==0){
		printf("Nam %d la nam nhuan",year);
	}else{
		printf("Nam %d khong phai nam nhuan",year);
	}
// B4 Ket thuc		
	return 0;
}
