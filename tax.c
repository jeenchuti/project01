/*Program Calculate tax 
Create by Chutikarn Kritsanaputi 
Last Update Aug 6th, 2020 */ 
#include <stdio.h> 
void main() 
{
	int T ; 
	printf("Program Calculate tax\nPress Product type(1-3): ");
	scanf("%d",&T);
	float P,tax,net ;
	printf("Press Product price:");
	scanf("%f",&P);
	if(T==1) { 
		tax=(0.07)*P ;
		net=tax+P;
	}
	else if(T==2) { 
		tax=(0.1)*P;
		net=tax+P;
	}
	else (T==3) { 
		tax=(0.15)*P;
		net=tax+P;
	}
	printf("Product tax: %f % \n Net: %f baht",tax,net);
	 
	getch();
}
