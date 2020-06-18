#include <stdio.h>

int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
//nhap mang.	
	for(int i=0;i<n;i++){
	printf("nhap phan tu a[%d]=",i);
	scanf("%d",&a[i]);
    }
//processing...
    int count=0;
    int max=0;
    for(int i=0;i<n;i++){
    	if(a[i]>0){
    		count++;
    		if(count>max){
    			max = count;
			}
		}
		if(a[i]<0){
    		count=0;
		}
	}
	printf("\nso luong so duong nhieu nhat la :%d",max);
}
