#include<stdio.h>

int main(){
// B1 khai bao bien N
	int N;
	
// B2 Nhap du lieu cho bien N
	printf("Hay nhap vao mot so nguyen bat ki: ");
	scanf("%d", &N);
	
// B3 Xu ly dieu kien voi N va in ra man hinh
	if(N % 3 == 0 && N % 5 == 0){
		printf("%d chia het cho 3 va 5", N);
	}else if(N % 3 == 0 && N %5 != 0){
		printf("%d chia het cho 3, khong chia het cho 5", N);
	}else if(N % 5 == 0 && N % 3!= 0){
		printf("%d chia het cho 5, khong chia het cho 3", N);
	}else{
		printf("%d khong chia het cho 3 va 5", N);
	}
// B4 Ket thuc
	return 0;
}
