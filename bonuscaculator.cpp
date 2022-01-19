#include <stdio.h>
#include <iostream>
using namespace std;
#include <string>
int main(){
	
	float salary, bonus;
	char level, fill, name[20];
	printf("Nhap vao ten cua ban: ");
	scanf("%s",name);
	printf("Nhap vao muc luong cua ban hien tai:");
	scanf("%f", &salary);
	scanf("%c", &fill);
	printf("nhap vao danh gia:");
	scanf("%c",&level);
	switch(level){
		case 'A':{
			bonus = salary*2;
			printf("Tien thuong tet 2021 cua ban la: %.2f", bonus);
			break;
		}
		case 'B':{
			bonus = salary*1.8;
			printf("Tien thuong tet 2021 cua ban la: %.2f", bonus);
			break;
		}
		case 'C':{
			bonus = salary*1.5;
			printf("Tien thuong tet 2021 cua ban la: %.2f", bonus);
			break;
		}
		case 'D':{
			bonus = salary*1.3;
			printf("Tien thuong tet 2021 cua ban la: %.2f", bonus);
			break;
		}
	}
	
}
