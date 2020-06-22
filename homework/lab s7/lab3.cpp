#include <stdio.h>
/*
tim so nguyen to trong mang
*/
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int a[n];
	//nhap
	for(int i=0;i<n;i++){
		printf("\nnhap phan tu a[%d]= ",i);
		scanf("%d",&a[i]);
	}
//processing..
    int count;
    printf("\ncac so nguyen to la: ");
    for(int i=0;i<n;i++){
    	if(a[i] < 2){
    		continue;
		}
		if(a[i] <= 3){
			printf("%d\t",a[i]);
			continue;
		}
		int count =0 ;
		for(int j=2;j <= a[i]/2; j++){
			if(a[i]%j == 0){
				count++;
				break;
			}
		}
		if(count == 0){
			printf("%d\t",a[i]);
		}
	}   
}
