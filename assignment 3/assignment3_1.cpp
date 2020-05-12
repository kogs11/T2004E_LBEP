// nhap 1 so nguyen duong khong qua 4 chu so. tim so nghich dao cua so do. vi du: nhap 241 thi ket qua la 142.

#include <stdio.h>

int main(){
	int n,n1,a1,a2,a3,a4;
	printf("Nhap so nguyen duong khong qua 4 chu so:\n");
	scanf("%d",&n);
	a4 = n % 10 ;
	a3 = ((n-a4)/10) % 10;
	a2 = ((n-a3*10-a4)/100) % 10;
	a1 = ((n-a2*100-a3*10-a4)/1000) % 10;
	if(n<=0 || n>9999){
		printf("So vua nhap khong thoa man dieu kien\n");
	}else if(n>999 && n<10000){
		n1 = a4*1000 + a3*100 + a2*10 + a1 ;
		printf("So nghich dao cua %d là: %d\n",n,n1);
	}else if(n>99 && n<1000){
		n1 = a4*100 + a3*10 + a2 ;
		printf("So nghich dao cua %d là: %d\n",n,n1);
	}else if(n>9 && n<100){
		n1 = a4*10 + a3 ;
		printf("So nghich dao cua %d là: %d\n",n,n1);
	}else if(n>0 && n<10){
		n1 = a4 ;
		printf("So nghich dao cua %d là: %d\n",n,n1);
	}
}
