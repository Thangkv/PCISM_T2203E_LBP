//nhap mot mang chuoi ki tu sap xep theo alphabet
#include <stdio.h>
#include <string.h>
int main (){
 int n;
 printf ("nhap n=");
 scanf ("%d",&n);
 char s[n][50];
 printf ("nhap mang chuoi n=\n");
 for (int i=0;i<n;i++){
 scanf ("%s",s[i]);
 }
 for (int i=0;i<n-1;i++){
  for (int j=0;j<n-i-1;j++){
   if (strcmp (s[j],s[j+1]) >0){
    char temp[50];
    strcpy( temp,s[j]);
    strcpy(s[j],s[j+1]);
    strcpy(s[j+1],temp);
   }
  }
 }
 printf ("sau khi sap xep :\n");
 for (int i=0;i<n;i++){
  printf ("%s\n",s[i]);
 }
   
}
