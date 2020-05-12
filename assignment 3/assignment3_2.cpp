// tinh lai kep ngan hang voi so tien la 4000$, lai xuat 8%

#include <stdio.h>

int main(){
	int  n;
	float TIEN;
	TIEN = 4000;
	printf("Tong so tien sau 4 nam gui tiet kiem la:\n");
	for(n=0;n<5;n++){
		TIEN = TIEN + TIEN * 0.08;
	}
	printf("%d",TIEN);
}
