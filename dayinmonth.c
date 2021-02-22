#include<stdio.h>
int main(void){
	int m,y = 0;
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d" "%d",&m,&y);
	y = y-543;
	if(y%4==0 && y%100!=0 || y%400==0){
		day[1]=29;
	}
	printf("%d",day[m-1]);
	return 0;
}

