#include <stdio.h>

int main(){
	int n;
	printf("nhap so luong phan tu n=");
	scanf("%d",&n);
	int a[n];
	printf("\na[0]=");
	scanf("%d",&a[0]);
	
	int i;
	
	for(i=1;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		int j=i-1;
		int temp=a[i];
		while(j>=0 && temp<a[j]){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
	printf("\ncac gia tri mang a");
	for(i=0;i<n;i++){
	printf("\na[%d]= %d",i,a[i]);
	
    }

}
