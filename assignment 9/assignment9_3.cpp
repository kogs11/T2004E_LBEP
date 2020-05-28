#include <stdio.h>
#include <string.h>

int main(){
	char ary[10][10];
	
	// Nhap mang
    for(int i=0; i<10; i++){
        printf("Nhap mang thu %d: ",i);
        gets(ary[i]);
    }
    
    // Sap xep
    for(int i=0;i<9;i++){
    	for(int j=0;j<10-i-1;j++){
	    	if(strcmp(ary[j],ary[j+1])>0){
	    		char temp[10];
	    		strcpy(temp,ary[j]);
	    		strcpy(ary[j],ary[j+1]);
	    		strcpy(ary[j+1],temp);
			}
		}	
	}
	
	// In mang
	printf("Mang sau khi sap xep\n");
	for(int i=0;i<10;i++){
		printf("%s\n",ary[i]);
	}
}
