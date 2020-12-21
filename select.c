#include<stdio.h>
int main(void){
	int a=0;
	while(a !=2){
		system("CLS");
		printf("Select Menu");
		printf("\n(1) Hello");
		printf("\n(2) END\n");
		scanf("%d",&a);
		if(a == 1){
			printf("\nHello\n");
			getch();
			}
	}
	return 0;
}
