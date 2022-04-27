#include <stdio.h>
#include <cmath>
#include <iostream>
int main() {
	printf("nhap so a:");
	int a;
	scanf("%d",&a);
	printf("nhap so b:");
	int b;
	scanf("%d",&b);
	printf("nhap so c:");
	int c;
	scanf("%d",&c);
	int Delta;
	Delta=b*b-4*a*c;
	int x1;
	int x2;
	if (Delta<0) {
		printf("phuong trinh vo nghiem");
	}else{
		x1=( 0-b-sqrt(Delta))/(2*a);
		printf("nghiem thu nhat: %d",x1);
		x2=( 0-b+sqrt(Delta))/(2*a);
		printf(" nghiem thu hai: %d",x2);
	}
	
}
