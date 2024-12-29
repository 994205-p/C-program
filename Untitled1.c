#include<stdio.h>
 main(){
int a[]={10,20,30,40,50}
int*p=&a[3]
printf("%d",*(++p));
printf("%d",*(--p));
return 0;
 }
