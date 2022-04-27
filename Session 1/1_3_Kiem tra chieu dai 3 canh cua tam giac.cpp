#include <stdio.h>
#include <cmath>
int main(){
	printf("nhap so a:");
	int a;
	scanf("%d",&a);
	printf("nhap so b:");
	int b;
	scanf("%d",&b);
	printf("nhap so c:");
	int c;
	scanf("%d",&c);
	if((a+b)>c){
		if((a+c)>b){
			if((b+c)>a){
				printf("day la 3 canh cua mot tam giac");
			}else{
				printf("day khong phai la 3 canh cua mot tam giac");
			}
		}else{printf("day khong phai la 3 canh cua mot tam giac");
		}
		
	}else{printf("day khong phai la 3 canh cua mot tam giac");
	}
}
