#include <stdio.h>
int main(){
	int n;
	int a;
	int b;
	do {
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap so b lon hon %d:",a);
	scanf("%d",&b);
	printf("cac so nguyen to lon hon %d va nho hon %d la: ",a,b);
}while(a>=b);
for ( int i=a;i<=b;i++){
	int	S;
	int c=0;

	
int j=2;
	while (j<=i/2 && c<2){
	S =i%j;
	if(S==0){
		c=c+1;
	
		break;
	}else{
	}
	j++;
	}
	if(c==0){
		printf("%d,",i);
	}else{
		
	}
}
	
	}
