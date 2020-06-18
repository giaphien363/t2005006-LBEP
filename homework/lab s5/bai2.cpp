#include <stdio.h>

int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int x1=0, x2=1, x3=1;
	
	for(;x3<n;){
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}if(x3>n){
		printf("display %d",x2);
	} else printf("display %d",x3);
}
