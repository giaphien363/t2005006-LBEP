#include <stdio.h>

int main(){
	int m, y;
	printf("nhap so tien($) can gui:\n");
	scanf("%d",&m);
	printf("nhap so nam muon gui:\n");
	scanf("%d",&y);
	float tiennhan=m;
	for(int i=1;i<=y;i++){
		float lai;
		lai=tiennhan*8/100;
		tiennhan+=lai;
	}
	printf("tong so tien nhan duoc la %f",tiennhan);
}
