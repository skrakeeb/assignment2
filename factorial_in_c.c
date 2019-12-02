#include <stdio.h>
int main()
{
  int i,n,s=1;
  printf("Give a positive integer: ");
  scanf("%d",&n);
  
  for (i=0;i<n;i++)
    {
      s=s*(i+1);
    }
  printf("Factorial %d is %d\n",n,s);
    
}
