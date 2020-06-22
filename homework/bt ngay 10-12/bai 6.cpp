#include <stdio.h>

int main(){
	float x1,x2;
	int n=0;
	printf("nhap so tien gui:\n");
	scanf("%f",&x1);
	printf("nhap so tien muon nhan:\n");
	scanf("%f",&x2);
		while(x1<=x2){
			float lai=x1*8/100;
			x1+=lai;
			n++;
		}
		printf("so nam la : %d",n);
	}
