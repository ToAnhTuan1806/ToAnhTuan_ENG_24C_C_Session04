#include<stdio.h>

int main(){
// B1 Khai bao bien a, b, c
	int a, b, c;
// B2 Nhap du lieu cho a, b, c
	printf("Nhap vao canh thu nhat: ");
	scanf("%d", &a);
	printf("Nhap vao canh thu hai: ");
	scanf("%d", &b);
	printf("Nhap vao canh thu ba: ");
	scanf("%d", &c);
	
// B3 Xu ly dieu kien voi bien a, b, c va in ra man hinh
	if(a>0 && b>0 && c>0){
		if(a+b>c && a+c>b && b+c>a){
			printf("La 3 canh cua tam giac");
		}else{
			printf("Khong phai 3 canh cua tam giac");
		}
	}else{
		printf("So khong hop le");
	}
	
// B4 Ket thuc	
	return 0;
}
