#include <stdio.h>
#include <cmath>


int main(){
	int	n;
	int A=0;
	printf("nhap n:");
	scanf("%d",&n);
		printf("tong cac chu so cua %d la: ",n);
		while (n>0){
	A=A+ n%10;
	n=n/10;
}
		printf("%d",A);
}
