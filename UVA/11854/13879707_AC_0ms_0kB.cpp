#include <stdio.h>

int main(){
int a, b, c, d;
 while(scanf("%d %d %d", &a, &b, &c) == 3 && (a || b|| c))
    {
  if(a >= b){
   if(a > c){
    d = a;
    a = c;
    c = d;
   }
  }else if(b > c){
   d = b;
   b = c;
   c = d;
  }

  if(a*a+b*b == c*c)
   printf("right\n");
  else
   printf("wrong\n");
 }
 return 0;
}