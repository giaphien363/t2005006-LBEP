#include <stdio.h>

int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int a[n];
	int x;
	int sum;
	for(int i=0;i<n;i++){
		printf("nhap gia tri phan tu:");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("\nin so mang ary[%d]=%d\n",i,a[i]);
	}
	for(int i=0;i<n;i++){
		if(i%2==0 && i!=0 ){
			if(a[i] %2 != 0){
				sum+=a[i];
				x++;
			}
		}
	} 
	printf("\ntrung binh cong so le = %d",sum/x);
	
}
