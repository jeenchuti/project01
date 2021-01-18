#include<stdio.h>
#include<string.h>

int main(void){
	int i, len = 0;
	char text[30] = "Chonkanyanukoon School";
	len = strlen(text);
	for(i=len-1; i>=0; i--){
		printf("%c",text[i]);
	}
	return 0;
}
