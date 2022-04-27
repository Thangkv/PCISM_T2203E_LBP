#include <stdio.h>
void reverseArray(int ary[], int n){

	for (int i=0;i<=n/2;i++){
		int temp;
		temp =ary[i];
		ary[i]=ary[n-i-1];
		ary[n-i-1]=temp;
	}
}
int main(){
	int n;
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	int ary[n];
	for (int i=0;i<n;i++){
		printf("ary[%d] : ",i);
		scanf("%d",&ary[i]);

	}
	reverseArray(ary,n);
	printf("reverse of Integer Array ary[%d] is: \n",n);
	for (int i=0;i<n;i++){
		printf("%d\n",ary[i]);
	}
	
}
