#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *b;
	char ch[]="The mean is: 3383.5\nThe variance is: 9055261.0";
	b=fopen("file2.bin","wb");
	if (b==NULL)
	{
		printf("Error");
	}
	else
	  {
	    printf("file is open\n");
	      }
	fwrite(ch,sizeof(ch),1,b);
	fclose(b);
	return 0;
}
