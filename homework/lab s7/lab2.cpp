#include <stdio.h>
/*
tim chu so be nhat trong so n
*/
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int min=9;
	if(n<0) n=(-n);
	while(n!=0){
		int sd = n%10;
		if(sd < min)
			min=sd;
			n/=10;
	}
	printf("\n chu so be nhat la: %d",min);
	
}
