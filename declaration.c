#include<stdio.h>
int main(){
int n1=1,n2=2;
int next;
int n;
scanf("%d/n",&n);
for (int i=0;i<=n;i++){
printf("%d\n",n1);
next=n1+n2;
n1=n2;
n2=next;
}
return 0;
}


