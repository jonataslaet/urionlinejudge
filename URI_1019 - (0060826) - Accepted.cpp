#include <stdio.h>

int main(){

   int time;
   int hhr, mhr, shr;

   scanf("%d", &time);

   hhr = time / 3600;
   mhr = (time % 3600) / 60;
   shr = (time % 3600) % 60;
   printf("%d:%d:%d\n", hhr, mhr, shr);
   
   return 0;     
}