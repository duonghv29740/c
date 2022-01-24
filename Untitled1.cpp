#include<stdio.h>
#include<math.h>

int main(void){
	printf("Hello!!\n");
	printf("Moi ban chon: \n");
	printf("1. Tinh hoc luc cua sinh vien.\n");
	printf("2. Giai phuong trinh bac mot, bac hai.\n");
	printf("3. Tinh tien dien hang thang.\n");
	int luaChon, bac;
	printf("Moi ban chon mot chuong trinh(1, 2, 3): ");
	scanf("%d", &luaChon);
	float diemTrungBinh, a, b, c, x, X1, X2;
	double delta, y;
	int soDien;
	float soTien;
	int diem;
	
	switch(luaChon) {
		case 1:
		    printf("Nhap diem trung binh cua sinh vien(0-10): ");
		    scanf("%f", &diemTrungBinh);
		    if (diemTrungBinh >=9) {
		        printf("Hoc luc cua sinh vien la: xuatsac");
		    } else if((diemTrungBinh<9)&&(8<=diemTrungBinh)){
		        printf("Hoc luc cua sinh vien la: gioi");
		    }else if((diemTrungBinh<8)&&(6.5<=diemTrungBinh)){
		        printf("Hoc luc cua sinh vien la: kha");
		    }else if((diemTrungBinh<6.5)&&(5<=diemTrungBinh)){
		        printf("Hoc luc cua sinh vien la: trung binh");
		    }else if((diemTrungBinh<5)&&(3.5<=diemTrungBinh)){
		        printf("Hoc luc cua sinh vien la: yeu");
		    }else{
		        printf("Hoc luc cua ban la: kem");
			}
			break;
		case 2:{
			printf("Bac1: Phuong trinh co dang ax + b = 0\n");
				printf("Bac2: Phuong trinh co dang ax*x + bx + c = 0\n");
				printf("Moi chon phuong trinh bac(1,2): \n");
				scanf("%d", &bac);
				switch(bac){
					case 1:{
						
						printf("Nhap so a: ");
						scanf("%f", &a);
						printf("Nhap so b: ");
						scanf("%f", &b);
						
						if((a==0)&&(b==0)){
							printf("Chuong trinh co vo so nghiem");
						}else if((a==0)&&(b!=0)){
							printf("Chuong trinh vo nghiem");
						} else {
							printf("Nghiem cua phuong trinh la: %f", -b/a);
						}
						break;
					}
						
					case 2:{
						
						printf("Nhap so a: ");
						scanf("%f", &a);
						printf("Nhap so b: ");
						scanf("%f", &b);
						printf("Nhap so c: ");
						scanf("%f", &c);
						delta = (b*b)-(4*a*c);
						y = sqrt(delta);
						
						if((a!= 0)&&(delta<0)){
							printf("Phuong trinh vo nghiem\n");
						}else if((a!= 0)&&(delta==0)){
							printf("Phuong trinh co nghiem kep x = %f", -b/(2*a));
						}else if((a!= 0)&&(delta>0)){
							printf("Phuong trinh co 2 nghiem rieng phan biet: \n");
							printf("X1 = %lf \n", ((-b+y)/(2*a)));
							printf("X2 = %lf", ((-b-y)/(2*a)));
						}else {
							printf("Phuong trinh co nghiem x= %f", (-c/b));
						}
						break;
					}
						
					default:
						{
							printf("Vui long chon lai.");
						break;
						}
						
					}
			break;
		}
				
		case 3:
			{
			printf("Nhap so dien hang thang: ");
        	scanf("%d", &soDien);
        	
        	if((soDien>=0)&&(soDien<=50)){
        		soTien = (50*1.678);
        		printf("So tien can phai dong la: %.3f(VND)", soTien);
        	}else if((soDien>50)&&(soDien<=100)){
        		soTien = (50*1.678)+(soDien-50)*1.734;
        		printf("So tien can phai dong la: %.3f(VND)", soTien);
        	}else if((soDien>100)&&(soDien<=200)){
        		soTien = (50*1.678)+50*1.734+(soDien-100)*2.014;
        		printf("So tien can phai dong la: %.3f(VND)", soTien);
        	}else if((soDien>200)&&(soDien<=300)){
        		soTien = (50*1.678)+50*1.734+100*2.014+(soDien-200)*2.536;
        		printf("So tien can phai dong la: %.3f(VND)", soTien);
        	}else if((soDien>300)&&(soDien<=400)){
        		soTien = (50*1.678)+50*1.734+100*2.014+100*2.536+(soDien-300)*2.834;
        		printf("So tien can phai dong la: %.3f(VND)", soTien);
        	}else{
        		soTien = (50*1.678)+50*1.734+100*2.014+100*2.536+100*2.834+(soDien-400)*2.927;
        		printf("So tien can phai dong la: %.3f(VND)", soTien);
        	}
        	break;
		}
        	
		default:
			printf("Vui long chon lai.");
			break;			
	}
	return 0;
}

