#include <stdio.h>
int main(){
	int n;
	int A=0;
	do {

	printf("nhap n:");
	scanf("%d",&n);
		printf("cac uoc cua %d la: ",n);
}while(n<=0);
for ( int i=1;i<n;i++){
		if(n%i==0){
		printf(",%d",i);
		A=A+i;
	
	}
	
}
	printf("\nTong cac uoc cua %d la: %d",n,A);
	
	}
