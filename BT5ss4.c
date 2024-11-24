#include <stdio.h>

int main(){
// B1 khai bao bien num, hundred, ten, unit
	int num, hundred, ten, unit;
// B2 Nhap du lieu cho bien num
	printf("Moi ban nhap so nguyen co ba chu so : ");
	scanf("%d",&num);
// B3 Xu ly dieu kien voi num, hundred, ten, unit	
	hundred = ((num/100)%10);
	ten = ((num/10)%10);
	unit = num%10;
	if( ten < unit < hundred ){
		printf("So thu 3 nam trong khoang giua so thu 2 va so thu 1");
	}else{
		printf("So thu 3 khong nam trong khoang giua so thu 2 va so thu 1");
	}
	  return 0;
}
