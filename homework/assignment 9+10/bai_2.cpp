#include <stdio.h>
#include <string.h>

//tim so luong nguyen am

void soLuongNguyenAm(char s[]){
	int count=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i] == 'a'|| s[i] == 'e'|| s[i] == 'u'|| s[i]=='o'|| s[i]=='i'){
			count ++;
		}
	}
	printf("\nso luong ki tu nguyen am la %d",count);
	printf("\ncac ki tu con lai la %d",strlen(s)-count);
}
w
int main(){
	char s[100];
	printf("nhap  chuoi :");
	scanf("%s",s);
	
	soLuongNguyenAm(s);
	return 0;
	
}
