/* coded by: rakeeb
   date: 02/12/19
   purpose: study of malloc function*/

// here we are defining the function for finding mean and variance

#include <stdio.h>
#include <stdlib.h>
#include "function.h"
float *fn(float *x,float n)
    {
    float *a; int i; float xs=0,sqx=0;
    
    	for (i=0;i<n;i++)
	    {
		  xs=xs+x[i];
		  sqx=sqx+(x[i]*x[i]);
	    }
	    a[0]=xs/n;
	    a[1]=(sqx/n)-(xs*xs)/(n*n);
	    return a;
    }
