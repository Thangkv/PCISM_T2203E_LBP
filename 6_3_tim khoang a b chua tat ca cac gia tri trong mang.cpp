#include <stdio.h>
#include <cmath>
//#include <iostream>
//using namespace std;
int main(){
int n;
 	printf("nhap so n:");
  	scanf("%d",&n);
  	int ary[n];
  	int i;
  	int min;
	int max;
    for(i=0;i<n;i++){
    	printf("nhap a[%d]",i);
   		scanf("%d",&ary[i]);
   	}
   	min=ary[0];	
	max=ary[0];
    for(i=0;i<n;i++){
	if(min>ary[i]){
		min=ary[i];
	}
	}
	for(i=0;i<n;i++){

	if(max<ary[i]){
		max=ary[i];
	}
	
	}
	printf("khoang a den b chua tat ca cac gia tri trong mang la: %d den %d",min,max);

}
