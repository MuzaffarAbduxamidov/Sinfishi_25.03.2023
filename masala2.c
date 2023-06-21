#include <stdio.h>

int main(){

   int n;
   int juft=0;
   int toq=0;
   int juft2=0;
   int toq2=0;
   printf("Son kiriting:");
   scanf("%d", &n);

   for(;n>=1; n--){
    juft=juft+(n%2==0);
    juft2=juft2+juft;
    toq=toq+(n%2==1);
    toq2=toq2+toq;
   }
   printf("Juft sonlar:%d\nToq sonlar:%d", juft2, toq2);
}
