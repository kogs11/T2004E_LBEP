#include <stdio.h>

int main(){
	int s;
	for(int i=1 ;i<=100 ; i++){
		if(i%2!=0){
			s+=i;
		}
	}
	printf("Tong 100 so le >0 dau tien la:%d",s);
}
