#include <stdio.h>
int main(){
	int n;
	float Sum=0;
	printf("Nhap so nguyen n:");
		scanf("%d",&n);
	if(n<1){
		printf("error");
	}else{
		for (int i=1;i<=n;i++){
		Sum=Sum+(1/(float)i);
		}
		printf("Sum is: %f",Sum);
	}
}
