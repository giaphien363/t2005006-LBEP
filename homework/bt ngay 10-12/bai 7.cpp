#include <stdio.h>

int main(){
	int n,i;
	printf("nhap so n=");
	scanf("%d",&n);
	float s=0;
	for(i=0;n<1000;i++){
		s+=n;
		printf("nhap lai n=");
		scanf("%d",&n);
	}
	printf("so lan nhap sai la %d\n",i);
	printf("trung binh cong =%f",s/i);
}
