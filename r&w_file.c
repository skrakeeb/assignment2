#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *b;          // b is a pointer
	b=fopen("file.txt","w");
	if (b==NULL)
	{
		printf("Error");
	}
	else
	  {
	    printf("file is open\n");
	      }
	fprintf(b,"%s\n%s","The mean is: 3383.5","The variance is: 9055261.0");
	fclose(b);
	return 0;
}
