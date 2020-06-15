#include <stdio.h>

int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
	int x=0;
	int sum =0;
	for(int i=0;i<n;i++){
		printf("nhap gia tri phan tu =");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i] %2 !=0){
			x++;
			sum+=a[i];
		}
	}
	printf("%d",sum/x);
}
