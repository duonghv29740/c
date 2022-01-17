#include <stdio.h>

int main(){

float a,b;

printf("Nhap vao so a:");
scanf("%f",&a);
printf("Nhap vao so b:");
scanf("%f",&b);

if(a != 0){
	printf("phuong trinh co nghiem la: %f", -b/a);
}else{
	if(b!=0){
		printf("phuong trinh vo nghiem");
	}else{
		printf("phuong trinh vo so nghiem");
	}
}

}
