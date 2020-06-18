#include <stdio.h>

int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
//  nhap mang
    for(int i=0;i<n;i++){
    	printf("nhap phan tu a[%d] =",i);
    	scanf("%d",&a[i]);
	}
// iterate array
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
    	if(a[i]>0){
    		sum+=a[i];
    		if(sum>s){
    			s=sum;
			}
		}else{
			sum=0;
		}
		
	}
	printf("\nso duong lon nhat la :%d",s);
}
