#include <stdio.h>
//#include <iostream>
//using namespace std;
int main(){
	int n;
	int min;
	int high;
 	printf("nhap so n:");
 	scanf("%d",&n);
	int ary[n];
 	int i;
    for(i=0; i<n; i++)
    {
    	printf("nhap a[%d]",i);
		scanf("%d",&ary[i]);
 	 }
  	min=ary[0];
    for(i=1; i<n; i++){
   	if (ary[i] < min && ary[i]>0){
   		min= ary[i];}
   	}
   printf("so duong nho nhat la: %d",min);
 }
