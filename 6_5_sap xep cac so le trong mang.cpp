#include <stdio.h>
//#include <iostream>
//using namespace std;
int main(){
int n;
 	printf("nhap so n:");
  	scanf("%d",&n);
  	int ary[n];
  	int tg;
    int i;
    int k;
    for(i=0;i<n;i++){
    	printf("nhap a[%d]",i);
   		scanf("%d",&ary[i]);
	}
   	for(i=0;i<n;i++){
	    if (ary[i]%2!=0){
	    	printf("ari[%d] la: %d",i,ary[i]);
	 		for (int j=i+1; j<n;j++){
 				if(ary[j]%2!=0){
 					if (ary[i]>ary[j]){
							tg=ary[i];
							ary[i]=ary[j];
							ary[j]=tg;
						//	printf("ari[%d] la: %d\n",i,ary[i]);
						//	printf("arj[%d] la: %d\n",j,ary[j]);
							
						}
				
					}	
				}
			}
		}
	
	for(i=0; i<n; i++){
		printf(" \n a[%d]  sap xep lai la: %d\n",i,ary[i]);
		
	}
	
	
}
