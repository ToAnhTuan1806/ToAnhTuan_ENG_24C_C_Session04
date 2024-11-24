#include<stdio.h>

int main(){
// B1 Khai bao bien month
	int month;
	
// B2 Nhap du lieu cho bien month
	printf("Nhap vao thang bat ki: ");
	scanf("%d", &month);
	
// B3 Xu ly dieu kien voi month va in ra man hinh
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Thang nay co 31 ngay");
			break;
		case 4: case 6: case 9: case 11:
			printf("Thang nay co 30 ngay");
			break;
		case 2:
			printf("Thang nay co 28 ngay hoac 29 ngay");
			break;
		default:
			printf("Thang khong hop le");
	}

// B4 Ket thuc
	return 0;
}
