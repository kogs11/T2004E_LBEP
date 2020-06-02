#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	char ch = 'a';
	printf("Enter string: ");
	scanf("%s",str);
	
	// Dem so nguyen am
	int vowel_a=0, vowel_e=0, vowel_i=0, vowel_o=0, vowel_u=0;
	
	for(int i=0;i<100;i++){
		if(str[i] == ch ){
			vowel_a++;
		}
	}
	printf("a: %d",vowel_a);
}
