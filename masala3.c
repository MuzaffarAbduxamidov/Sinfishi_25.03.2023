#include <stdio.h>
#include <math.h>
int main(){

  int a;
  int b;
  int c;
  int d=0;
  int f=0;
  int e=1;
  printf("Son kiriting:");
  scanf("%d", &a);
  printf("Son kiriting:");
  scanf("%d", &b);
  printf("Son kiriting:");
  scanf("%d", &c);
int s=0;
printf("%d\n",a);
  for(int i=1;i<=c-1; i++){
    //d=a*b;
   // s=s+d;
   // f=s*b;
   d=a*b*(int)pow((int)b,(int)i-1);
    printf("%d\n",d);
  }
}
