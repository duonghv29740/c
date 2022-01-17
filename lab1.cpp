#include <stdio.h>
#include <iostream>
using namespace std;
#include <string>
int main(){
	
	char name[20];
	float height;
	float weight;
	float bmi;
	string quali;
	printf("------------------ \n");
	printf("Caculate your BMI\n");
	printf("------------------\n");
	printf("Fill your name: ");
	scanf("%s",name);
	printf("Fill your height(m): ");
	scanf("%f",&height);
	printf("Fill your weight(kg): ");
	scanf("%f",&weight);
	printf("------------------\n");
	bmi = weight/(height*2);
	printf("%s's BMI is %.2f \n",name,bmi);
	if(bmi<18.5){
		quali = "Low";	
	}else if(bmi>18.5 && bmi<24.9){
		quali = "Normal";
	}else if(bmi>25 && bmi<29.9){
		quali = "Fat";
	}else if(bmi>30 && bmi<34){
		quali = "Fat I";
	}else if(bmi>35 && bmi<39.9){
		quali = "Fat III";
	}else{
		quali = "Fat IV";
	}
	
	cout<< "Your BMI is: "<<quali;
	
	return 0;
	
}
