#include <stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	int b;
	scanf("%d",&b);
	int c;
	scanf("%d",&c);
	int Min;
	Min=a;
	if(b<Min){
		Min=b;
		if(c<Min){
			Min=c;
			printf("so nho nhat la: %d",Min);
		}else{printf("so nho nhat la: %d",Min);
		}
	}else{
		if (c<Min){
			Min=c;
			printf("so nho nhat la: %d",Min);
		}else{printf("so nho nhat la: %d",Min);
		}
	}
}

