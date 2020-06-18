#include <stdio.h>
/*
tim so be nhat trong mang
*/
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\nso be nhat la: %d",a[0]);
}
