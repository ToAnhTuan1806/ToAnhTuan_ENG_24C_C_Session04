#include<stdio.h>

int main(){
// B1 khai bao bien integer, negativeNumber, positiveNumber
	int n, negativeNumber, positiveNumber;
	
// B2 Nhap du lieu cho bien integer
	printf("Hay nhap vao mot so nguyen bat ki: ");
	scanf("%d", &n);
	
// B3 Xu ly dieu kien voi n va in ra man hinh
	if(n > 0){
		printf("Day la so duong");
	}else{
		printf("Day la so am");
	}
// B4 Ket thuc
	return 0;
}
