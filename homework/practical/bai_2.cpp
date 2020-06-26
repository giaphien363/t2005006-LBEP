#include <stdio.h>

int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("\nnhap phan tu a[%d] =",i);
		scanf("%d",&a[i]);
	}
	int i=0;
	int sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	printf("\nAverage =%0.1f",(float)sum/i);
}
