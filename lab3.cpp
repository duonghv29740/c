#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
#include <string>
void tinhHocLuc(){
	float diem;
	string hocLuc;
	printf("Chuong trinh tinh hoc luc\n");
	printf("Diem cua sinh vien: ");
	scanf("%f", &diem);
	if(diem < 3.5){
		hocLuc = "kem";
	}else if(diem<5){
		hocLuc = "yeu";
	}else if(diem<6.5){
		hocLuc = "trung binh";
	}else if(diem<8){
		hocLuc = "kha";
	}else if(diem<9){
		hocLuc = "gioi";
	}else{
		hocLuc = "xuat sac";
	}
	cout<< "Hoc luc: "<<hocLuc;	
}
void pTB1(){
	float a,b;
	printf("Giai phuong trinh bac nhat\n");
	printf("Nhap so a: ");
	scanf("%f", &a);
	printf("Nhap so b: ");
	scanf("%f", &b);
	if(a==0){
		if(b!=0){
			printf("Phuong trinh vo nghiem");
		}else{
			printf("Phuong trinh co vo so nghiem");
		}
	}else{
		printf("Phuong trinh co nghiem la: %.2f", -b/a);
	}
}
void pTB2(){
	float a,b,c;
	printf("Giai phuong trinh bac hai\n");
	printf("Nhap so a: ");
	scanf("%f", &a);
	printf("Nhap so b: ");
	scanf("%f", &b);
	printf("Nhap so c: ");
	scanf("%f", &c);
	if(a==0){
		if(b==0){
			if(c!=0){
				printf("Phuong trinh vo nghiem");
			}else{
				printf("Phuong trinh co vo so nghiem");
			}
		}else{
			printf("Phuong trinh co nghiem la: %.2f", -c/b);
		}
	}else{
		float delta = b*b-4*a*c;
		if(delta <0){
			printf("Phuong trinh vo nghiem");
		}else if(delta == 0){
			printf("Phuong trinh co nghiem kep: %f", -b/(2*a));
		}else{
			float x1,x2;
			x1 = (-b-sqrt(delta))/2*a;
			x2 = (-b+sqrt(delta))/2*a;
			printf("Phuong trinh co 2 nghiem phan biet la: %f,%f", x1,x2);
		}
	}
	
}
void tinhTienDien(){
	float dien, tienDien;
	printf("Tinh tien dien");
	float a = 50*1.734, b = 100*2.014, c = 100*2.536,d = 100 * 2.834;
	printf("Nhap vao so dien tieu thu: ");
	scanf("%f", &dien);
	if(dien <= 50){
		tienDien = dien * 1.678;
	}else if(dien <= 100){
		tienDien = a + (dien-50)*1.734;
	}else if(dien <= 200){
		tienDien = a+b+(dien-100)*2.014;
	}else if(dien<=300){
		tienDien = a+b+c+(dien-200)*2.536;
	}else if(dien<=400){
		tienDien = a+b+c+d+(dien-300)*2.834;
	}else{
		tienDien = a+b+c+d+(tienDien-400)*2.927;
	}
	printf("Tien dien thang nay: %f\n", tienDien);
}
int main(){
	while(true){
	int func;
	printf("------------------------")
	printf("\nChuong trinh lab 3\n");
	printf("1. Chuong trinh tinh hoc luc\n");
	printf("2. Chuong trinh giai phuong trinh\n");
	printf("3. Chuong trinh tinh tien dien\n");
	printf("4. Thoat chuong trinh\n");
	printf("Moi ban chon chuong trinh: ");
	scanf("%d", &func);
	switch(func){
		case 1:{
			tinhHocLuc();
			break;
		}
		case 2:{
			int func2,dem = 0;
			printf("-------Giai phuong trinh-------\n");
			printf("Chon loai phuong trinh: \n");
			printf("1. Phuong trinh bac nhat\n");
			printf("2. Phuong trinh bac 2\n");
			printf("3. Thoat chuong trinh ");
			scanf("%d", &func2);
				switch(func2){
					case 1:{
						pTB1();
						break;
					}
					case 2:{
						pTB2();
						break;
					}
					case 3:{
						dem = 1;
						break;
					}
					default:{
						printf("Chon sai loai phuong trinh");
						break;
					}
				}
			break;	
		}
		case 3:{
			tinhTienDien();
			break;
		}
		case 4:{
			printf("Bye Bye");
			exit(0);
		}
		default : {
			printf("Moi ban chon dung chuong trinh");
			break;
		}
	}
	}
}

