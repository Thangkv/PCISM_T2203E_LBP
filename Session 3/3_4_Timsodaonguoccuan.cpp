#include <stdio.h>
#include <cmath>


int main(){
	int	S;
	int A=0;
	int B=0;
	printf("nhap S:");
	scanf("%d",&S);
		while (S>0){
	A=S%10;
	B=B*10+A;
	S=S/10;
}
	
		printf("so dao nguoc cua so S la: %d",S,B);
}
