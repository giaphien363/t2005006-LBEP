#include <stdio.h>

int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	printf("\nnhap phan tu a[%d]=",i);
	scanf("%d",&a[i]);
    }
	int min=0,i;
/*
tim so duong truoc gan min la so duong roi tinh tiep!
*/	
    for(i=0;i<n;i++){
    	if(a[i]>0){
    	    min=a[i];
    		break;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]>0 && a[i]<min){
			min=a[i];
		}
	}
	printf("\nso duong nho nhat la= %d",min);
}
