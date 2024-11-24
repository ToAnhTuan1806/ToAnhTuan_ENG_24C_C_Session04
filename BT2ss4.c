#include<stdio.h>

int main(){
// B1 khai bao bien N, even, odd
	int N, even, odd;
	
// B2 Nhap du lieu cho bien N
	printf("Hay nhap vao mot so nguyen bat ki: ");
	scanf("%d", &N);
	
// B3 Xu ly dieu kien voi N va in ra man hinh
	if(N%2==0){
		printf("Day la so chan");
	}else{
		printf("Day la so le");
	}
// B4 Ket thuc
	return 0;
}
