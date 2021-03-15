#include<stdio.h>
float score[20] = {};
int n = 0;
float cal(int n);
float avg();
float max();
float min();

int main(void){
	int i;
	// input here
	scanf("%d",&n);
	printf("total number of student = %d\n",n);
	for(i = 0; i < n; i++){
		scanf("%f\n",&score[i]);
		while(score[i] <0){
			printf("Number lass than zero\n");
			scanf("%f",score[i]); 
		}
	}
	printf("Average = %.2f\nMax = %.2f\nMin = %.2f",avg(),max(),min());
	return 0;
}
float cal(int n){
	float result = 0.0;
	if (n==1){
		result = avg();
	}
	if (n==2){
		result = max();
	}
	if (n==3){
		result = min();
	}
	return result;
}
float max(){
	float max_v = 0.0;
	int i;
	max_v = score[0];
	for(i = 1 ;i < n; i++){
		if(max_v < score[i]){
			max_v = score[i];
			}
	}
	return max_v;
}
	
float min(){
	float min_v = 0.0;
	int i;
	min_v = score[0];
	for(i = 1;i < n; i++){
		if(min_v > score[i]){
			min_v = score[i];
			}
	}
	return min_v;
}
float avg(){
	float average =0.0;
	float sum = 0.0;
	int i;
	//float nf = float(n);
	for(i = 0; i < n; i++){
		sum = sum + score[i];
	}
	average = (double)sum/n ;
	
	return average;
}