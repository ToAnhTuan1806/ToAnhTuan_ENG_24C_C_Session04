#include <stdio.h>

int main(){
// B1 Khai bao bien dd, mm, yy
	int dd,mm,yy;
// B2 Nhap du lieu cho bien dd, mm, yy	
	printf("Hay nhap ngay : ");
	scanf("%d",&dd);
	printf("Hay nhap thang : ");
	scanf("%d",&mm);
	printf("Hay nhap nam : ");
	scanf("%d",&yy);

// B3 Xu ly dieu kien voi bien dd, mm, yy va in ra man hinh	
	if(dd>31 || mm>12){
		printf("Ngay thang khong hop le");
		if(mm==2 && dd>29){
			printf("Ngay thang khong hop le");
		}
	}else{
		printf("%d/%d/%d",dd,mm,yy);
	}

// B4 Ket thuc
	return 0;
	
}
