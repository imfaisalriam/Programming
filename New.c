#include<stdio.h>
int main()
{
  int a = 10;
  int* p= &a;
  int** q= &p;
  int*** r = &q;

  printf("%d\n",&p);
  //printf("%d\n",**q);
  //printf("%d\n", r);

  **q=*p+2;
  //printf("%d\n",p);
  printf("%d\n",q);
  printf("%d\n",**q);
  printf("%d\n",r);
}