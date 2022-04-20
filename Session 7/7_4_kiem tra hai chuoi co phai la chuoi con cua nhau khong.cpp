#include <stdio.h>
//#include <string.h>
#include <cstring>
int main (){
   	char s1[40];
 	printf ("nhap chuoi s1:\n");
 	scanf ("%s",s1);
 	printf ("chuoi s1 vua nhap la: %s\n",s1);
 	char s2[40];
 	printf ("nhap chuoi s2:\n");
 	scanf ("%s",s2);
 	printf ("chuoi s2 vua nhap la: %s\n",s2);
 	int a,b,k,dem;
 	a=strlen(s1);
  	b=strlen(s2);
  	if(a<=b){
 		for (int i=0;i<a;i++){
			if (s1[0]== s2[i]){
				k=i;
				dem=0;
			//	printf("k la: %d\n",i);
				for (int j=0;j<a;j++){
					if(s1[j]==s2[j+k]){
						dem=dem+1;
			//			printf("dem la: %d",dem);
					}
				}
			}
		}
 	}else{
 		for (int i=0;i<b;i++){
			if (s2[0]== s1[i]){
				k=i;
				dem=0;
			//	printf("k la: %d\n",i);
				for (int j=0;j<b;j++){
					if(s2[j]==s1[j+k]){
						dem=dem+1;
					}
				}
			}
		}
	}
	if(dem==a){
		printf("chuoi s1 la chuoi con cua chuoi s2\n");
	}else{
		if(dem==b){
		printf("chuoi s2 la chuoi con cua chuoi s1\n");
		}else{
			printf("hai chuoi khong phai la chuoi con cua nhau\n");
		}
	}
	
}
