 /*Program Calculate about Circle
Create by Chutikarn Kritsanaputi
Last update July 25th, 2020*/
#include <stdio.h>
void main()
{ 
 float r, L, A, V;
 	
 	printf("Program Calculate about Circle\n");
	printf("Insert Radius(m) : ");
    scanf("%f", &r);
    L=2.0*(22.0/7.0)*r;
    A=(22.0/7.0)*(r*r);
    V=(4.0/3.0)*(22.0/7.0)*(r*r*r);
     
    printf("Circle Length = %f meter \n Circle Area = %f square meters \n Spherical Volume = %f cubic meter",L ,A ,V );
     
   getch();
}
