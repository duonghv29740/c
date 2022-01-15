#include <stdio.h>


int main(void){
	int num;
	printf("Moi ban chon chuong trinh\n");
	printf("1. Tinh tong 2 so\n");
	printf("2. Tinh chu vi dien tich hinh chu nhat\n");
	printf("3. Tinh chu vi dien tich hinh tron\n");
	printf("4. Tinh diem trung binh\n");
	
	scanf("%d",&num);
	
	switch(num){
		case 1:
			float a,b,sum,sub,sub2; 
			printf("Tinh tong va hieu 2 so\n");
			printf("Vui long nhap so thu nhat: ");
			scanf("%f",&a);
			printf("Vui long nhap so thu hai: ");
			scanf("%f",&b);
			sum = a+b;
			sub = a-b;
			sub2 = b-a;
			printf("Ket qua: \n");
			printf("Tong 2 so: a + b = %.0f\n",sum);
			printf("Hieu so a - b = %.0f\n",sub);
			printf("Hieu so b - a = %.0f\n",sub2);
			break;
			
		case 2:
			float h,w,s,c;
			printf("Tinh chu vi dien tich hinh chu nhat\n");
			printf("Nhap chieu dai: ");
			scanf("%f",&h);
			printf("Nhap chieu rong: ");
			scanf("%f",&w);
			c = (h+w)*2;
			s = h*w;
			printf("Chu vi hinh chu nhat la: %.2f\n",c);
			printf("Dien tich hinh chu nhat la: %.2f",s);
			break;
		case 3:
			float r,s1,c1; 
			printf("Tinh chu vi dien tich hinh tron\n");
			printf("Nhap kich thuoc ban kinh: ");
			scanf("%f",&r);
			c1 = 2*3.14*r;
			s1 = 3.14*r*r;
			printf("Chu vi hinh tron la: %.2f\n",c1);
			printf("Dien tich hinh tron la: %.2f",s1);
			break;
			
		case 4: 
			float Math, English, History,x;
			char Name[30];
			printf("Type the information:\n");
			printf("------------------\n");
			printf("Full Name: \n");
			scanf("%s", &Name);
			printf("Math: ");
			scanf("%f", &Math);
			printf("English: ");
			scanf("%f",&English);
			printf("History: ");
			scanf("%f",&History);

			x = (Math*3 + English*2 + History)/6;
			printf("--------------------------\n");
			printf("Student name: %s\n",Name);
			printf("Mask: \n");
			printf("Math: %.2f \n",Math);
			printf("English: %.2f \n",English);
			printf("History: %.2f \n",History);
			printf("Diem trung binh mon la %.2f \n", x);
					
	}
	
	
	return 0;
}
