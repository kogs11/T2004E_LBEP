#include <stdio.h>
#include <string.h>

void concat(char s1[], char s2[]){
	strcat(s1," ");
	strcat(s1,s2);
}

int main(){
	char s1[100], s2[100];
	printf("Enter the first string: ");
	scanf("%s",s1);
	printf("Enter the second string: ");
	scanf("%s",s2);
	
	concat(s1,s2);
	printf("The concatenated string: %s",s1);
	
	return 0;
}
