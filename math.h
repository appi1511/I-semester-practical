#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  scanf("%i %i %i",&a,&b,&c);
  int p=pow(a,b);
  int q=sqrt(c);
  printf("%i %i",p,q);
  return 0;
}
