/*한소정, B411235*/
#include <stdio.h>
#include <string.h>
int main(int argc, char * argv[])
{
	int i=0;
	int j=0;
	int k=0;
	if(argc!=3)
		return -1;

	if(strlen(argv[1])<=strlen(argv[2]))
	{	
		for(j=0; j<=strlen(argv[2])-strlen(argv[1]); ++j)
		{
			k=j;
			for(i=0; i<=strlen(argv[2]); i++)
			{
				if(argv[1][i]==argv[2][k])
				{
					if(i+1==strlen(argv[1])){
						printf("(%s) is part of (%s) \n", argv[1], argv[2]);
						return 0;
					}
				}
				else
					break;
				k++;
			}
		}
		printf("Non-inclusive \n");
		return 0;
	}
	else if(strlen(argv[2])<=strlen(argv[1]))
	{
		for(j=0; j<strlen(argv[1])-strlen(argv[2]); ++j)
		{
			k=j;
			for(i=0; i<=strlen(argv[1]); i++)
			{
				if(argv[2][i]==argv[1][k])
				{
					if(i+1==strlen(argv[2])){
						printf("(%s) is part of (%s) \n", argv[2], argv[1]);
						return 0;
					}
				}
				else
					break;
				k++;
			}
		}
		printf("Non-inclusive \n");
		return 0;
	}
}
