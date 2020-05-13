#include <stdio.h>

int main(){
	int S=0, i;
	printf("Tong S=1+2+...+1000 la:\n");
	
	for(i=1;i<=1000;i++){
		S+=i;
	}
	printf("%d",S);
}
