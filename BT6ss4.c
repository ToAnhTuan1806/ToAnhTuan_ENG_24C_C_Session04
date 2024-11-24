#include <stdio.h>

int main(){
// B1 Khai bao bien oldElecNum, newElecNum, total
	float oldElecNum, newElecNum, total;
// B2 Nhap du lieu cho bien oldElecNum, newElecNum
	printf("Nhap vao so dien cu: ");
	scanf("%f",&oldElecNum);
	
	printf("Nhap vao so dien moi: ");
	scanf("%f",&newElecNum);
// B3 Xu ly tinh taon, dieu kien voi bien total va in ra man hinh
	total = newElecNum - oldElecNum;
	printf("Da su dung %.0f so dien\n",total);
	
	if(total>=0 && total<50){
		printf("Gia dien: %.0f (VND/kWh)", total*10000);
	}else if(total<100){
		printf("Gia dien: %.0f (VND/kWh)", total*15000);
	}else if(total<150){
		printf("Gia dien: %.0f (VND/kWh)", total*20000);
	}else if(total<200){
		printf("Gia dien: %.0f (VND/kWh)", total*25000);
	}else{
		printf("Gia dien: %.0f (VND/kWh)", total*30000);
	}
// B4 Ket thuc
	return 0; 
}
