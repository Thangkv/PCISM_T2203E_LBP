#include <stdio.h>
int main(){
	//input a
	int a;
	scanf("%d",&a);
	//input b
	int b;
	scanf("%d",&b);
	//input c
	int c;
	scanf("%d",&c);
	//so sanh a > b
	int Max;
	Max=a;
	if (b>Max){
		Max=b;
		if (c>Max){
			Max=c;
			printf("so lon nhat: %d" ,Max);
		}else{
			printf("so lon nhat: %d" ,Max);
		}
	}else{
		if (c>Max){
			Max=c;
			printf("so lon nhat: %d" ,Max);
		}else{
			printf("so lon nhat: %d" ,Max);
		}
	}
	
}
	
