#include <stdio.h>
//#include <iostream>
//using namespace std;
int main(){
 int n;
 printf("nhap so n:");
  scanf("%d",&n);
  int ary[n];
    int i, tong=0,  chuoi=0;
    for(i=0; i<n; i++)
    {
    	printf("nhap ary[%d]",i);
	 scanf("%d",&ary[i]);
  }
  for(i=0; i<n; i++){
  	if(ary[i]>0){
  		tong=tong+ary[i];
  		if(chuoi<tong){
  			chuoi=tong;
		  }
  	}else{
		tong=0;
	}
  }
  printf("chuoi so duong lien tiep co tong lon nhat la: %d\n",chuoi);

}
