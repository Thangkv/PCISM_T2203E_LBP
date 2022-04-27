#include <stdio.h>
//#include <iostream>
//using namespace std;
int main(){
 int n;
 printf("nhap so n:");
  scanf("%d",&n);
  int ary[n];
    int i, dem=0,  so=0;
    for(i=0; i<n; i++)
    {
    	printf("nhap ary[%d]",i);
	 scanf("%d",&ary[i]);
  }
  for(i=0; i<n; i++){
  	if(ary[i]>0){
  		dem=dem+1;
  		if(so<dem){
  			so=dem;
		  }
  	}else{
		dem=0;
	}
  }
  printf("so luong so duong lien tiep nhieu nhat la: %d\n",so);

}
