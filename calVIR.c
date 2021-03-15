#include <stdio.h>
float cal(int n);

int main(void){
	int i,n;
	float ans;
	printf("(1) Voltage (2) Current (3) Resistance\n");
	printf("enter :");
	scanf("%d",&n);
	ans = cal(n);
	printf("anwser is %f",ans);
	return 0;
}

float cal(int n){
	float result = 0.0;
	float V,I,R;
	if(n==1){
		printf("I = ");
		scanf("%f",&I);
		printf("R = ");
		scanf("%f",&R);
		result =I*R;
	}
	if(n==2){
		printf("V = ");
		scanf("%f",&V);
		printf("R = ");
		scanf("%f",&R);
		result =V/R;
	}
	if(n==3){
		printf("I = ");
		scanf("%f",&I);
		printf("V = ");
		scanf("%f",&V);
		result =V/I;
	}
	return result;
}
