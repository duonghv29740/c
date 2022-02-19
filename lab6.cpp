#include <stdio.h>

void tbc(){
	int n,i,tong = 0,count=0;
	float tb=0;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Nhap vao gia tri phan tu thu %d:",i+1);
		scanf("%d",&arr[i]);	
	}
	for(i=0;i<n;i++){
		if((arr[i]%3)==0){
			tong += arr[i];
			count++;
		}
	}
	tb = (float)(tong)/count;
	printf("Trung binh cac so chia het cho 3 trong mang la: %.2f",tb);
}
void minMax(){
	int n,i;
	printf("Nhap vao so phan tu: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Nhap vao gia tri phan tu thu %d:",i+1);
		scanf("%d",&arr[i]);
	}
	int min = arr[0],max = arr[0];
	for(i=0;i<n;i++){
		if(min > arr[i]){
			min = arr[i];
		}
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("Min: %d \n",min);
	printf("Max: %d \n",max);
}
void rang(){
	int n,i,j,temp;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		printf("Nhap vao gia tri phan tu o so %d: ",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(num[i]>num[j]){
				temp = num[j];
				num[j]= num[i];
				num[i] = temp;
			}
		}
	}
	printf("Xep tho thu tu giam dan: ");
	for(i=0;i<n;i++){
		printf("%d",num[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(num[i]<num[j]){
				temp = num[j];
				num[j]= num[i];
				num[i] = temp;
			}
		}
	}
	printf("Xep theo thu tu giam dan: ");
	for(i=0;i<n;i++){
		printf("%d",num[i]);
	}
	printf("\n");
}
	pow(){
		int h,c,i,j;
		printf("Nhap vao so hang:");
		scanf("%d",&h);
		printf("Nhap vao so cot:");
		scanf("%d",&c);
		int num[h][c];
		for(i=0;i<h;i++){
			for(j=0;j<c;j++){
				printf("Nhap gia tri cho phan tu %d-%d: ",i,j);
				scanf("%d",&num[i][j]);
			}
		}

		for(i=0;i<h;i++){
			for(j=0;j<c;j++){
				printf("%d\t",num[i][j]);
			}
			printf("\n");
		}
	}
int main(){
	int func;
	printf("Menu\n");
	printf("1.Tinh trung binh cong\n");
	printf("2.Tim Min, Max\n");
	printf("3.Hoan vi\n");
	printf("4.Binh phuong ma tran\n");
	printf("Chon chuong trinh: ");
	scanf("%d",&func);
	
	switch(func){
		case 1: {
			printf("Tinh trung binh cong cac so chia het cho 3:\n");
			tbc();
			break;
		}
		case 2:{
			printf("Tim Min, Max\n");
			minMax();
			break;
		}
		case 3:{
			printf("Hoan vi cac so\n");
			rang();
			break;
		}
		case 4:{
			printf("Tinh binh phuong ma tran\n");
			pow();
			break;
		}
	}
	
}
