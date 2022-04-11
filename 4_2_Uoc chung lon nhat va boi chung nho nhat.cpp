#include <stdio.h>
int main(){
	int a;
	int b;
	do {
	printf("nhap a:");
	scanf("%d",&a);
}while(a<=0);
	do {
	printf("nhap b:");
	scanf("%d",&b);
}while(b<=0);

for ( int i=a;i>0;i--){
		if(a%i==0&&b%i==0){
			
		printf("uoc chung lon nhat la %d\n",i);
		break;
	
	}
	
}

//	printf("uoc chung lon nhat la 1");
for(int j=1;j<=a*b;j++){
	int S=a*j;
	if(S%b==0){
		printf("boi chung nho nhat la: %d",S);
		break;
	}
}	
	}
