#include <stdio.h>

int main(){
	int s=0;
	for(int i=0,count=0 ;count<100 ; i++){
		if(i%2!=0){
			s+=i;
			count++;
		}
	}
	printf("Tong 100 so le >0 dau tien la:%d",s);
}
