#include <stdio.h>

change(float *avg){
	*avg = *avg/6;
	printf("Diem trung binh mon la %.2f \n", *avg);
}

display(float *Math, float *English, float *History, char *Name){
	printf("--------------------------\n");
	printf("Student name: %s\n", *Name);
	printf("Mask: \n");
	printf("Math: %.2f \n",*Math);
	printf("English: %.2f \n",*English);
	printf("History: %.2f \n",*History);
	
}

int main(void){

float Math, English, History;
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

float x = Math*3 + English*2 + History;

display(&Math,&English,&History,&Name);
change(&x);

return 0;
}

