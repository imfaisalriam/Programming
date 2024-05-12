#include<stdio.h>
int main()
{
  int a = 10;
  int* p= &a;
  (*p+1)=5;
  int** q= &p;
  int*** r = &q;

  printf("%d\n",&p);
  //printf("%d\n",**q);
  //printf("%d\n", r);

  **q=*p+2;
  *r=*q+1;
  //printf("%d\n",p);
  printf("%d\n",q);
  printf("%d\n",**q);
  printf("%d\n",r);
}