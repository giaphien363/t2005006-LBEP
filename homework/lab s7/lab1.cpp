#include <stdio.h>
/*
tim chu so lon nhat trong so n
*/
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int max=0;
	if(n<0) n=-n;
	while (n!=0){
		int sd = n%10;
		if(sd>max)
		max =sd;
		n/=10;
	}
	printf("chu so lon nhat la %d",max);
}
