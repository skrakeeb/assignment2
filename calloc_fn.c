/* coded by: rakeeb
   date: 02/12/19
   purpose: study of calloc function*/


#include <stdio.h>
#include <stdlib.h>

float *fn(float *x,float n,float *a) //"a" is a arrey here
    {
    	  int i;  float xs=0,sqx=0;
    	
    	for (i=0;i<n;i++)
	    {
		  xs=xs+x[i];
		  sqx=sqx+(x[i]*x[i]);
	    }
	    a[0]=xs/n;            //finding mean
	    a[1]=(sqx/n)-(xs*xs)/(n*n);  // finding variance
	    return a;
    }
int main()
{
	int i;
	float n=100,a[100];
	float *b;                         // b is a pointer
	b=(float*)calloc(n,sizeof(float));
	if (b==NULL)
	{
		printf("Memory not allocated.\n");
	}
	else
	{
		printf("Memory allocation successful.\n");
	
	for (i=0;i<n;i++)
	{
		b[i]=(i+1)*(i+1);
		printf("%f  ",b[i]);
	}
	printf("\n");

	float *c=fn(b,100,a);
	printf("The mean is:  %f\nThe varience is:  %f\n",c[0],c[1]);
	free(b);
        printf("Memory is cleared\n");
	
	}
	return 0;
}
