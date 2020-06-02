#include <stdio.h>
#include <string.h>

int CountVowel(char str[],char ch, int count){
	count = 0;
	for(int i=0;i<100;i++){
		if(str[i] == ch ){
			count++;
		}
	}
	return count;
}

int main(){
	char s1[100];
	printf("Enter string: ");
	scanf("%s",s1);
	
	int vowel_a, vowel_e, vowel_i, vowel_o, vowel_u;
	
	CountVowel(s1,'a',vowel_a);
	CountVowel(s1,'e',vowel_e);
	CountVowel(s1,'i',vowel_i);
	CountVowel(s1,'o',vowel_o);
	CountVowel(s1,'u',vowel_u);
	
	printf("Number of charactors: \n");
	printf("a: %d; e: %d; i: %d, o: %d, u: %d\n",vowel_a,vowel_e,vowel_i,vowel_o,vowel_u);
	
	int total=0;
	total = vowel_a + vowel_e + vowel_i + vowel_o + vowel_u;
	printf("Percentages of total:\n");
	printf("a: %f%%; e: %f%%; i: %f%%, o: %f%%, u: %f%%\n",(float)vowel_a/total*100,(float)vowel_e/total*100,(float)vowel_i/total*100,(float)vowel_o/total*100,(float)vowel_u/total*100);	
}
