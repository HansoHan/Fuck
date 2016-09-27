#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[])
{
	int len1, len2;
	char temp;
	int i;
	if(argc != 3){
		printf("You have to input 2 English word \n");
		return -1;
	}

	len1=strlen(argv[1]);
	len2=strlen(argv[2]);
	if(len1>len2){
		for(i=0; i<len2/2; i++)
		{
			temp=argv[2][i];
			argv[2][i]=argv[2][(len2-1)-i];
			argv[2][(len2-1)-i]=temp;
		}
		printf("긴 단어 : %s \n", argv[1]);
		printf("짧은 단어를 뒤집은 결과: %s \n", argv[2]);
		return 0;
	}
	else if(len1<len2){
		for(i=0; i<len1/2; i++){
			temp=argv[1][i];
			argv[1][i]=argv[1][(len1-1)-i];
			argv[1][(len1-1)-i]=temp;
		}
		printf("긴 단어: %s \n", argv[2]);
		printf("짧은 단어를 뒤집은 결과: %s \n", argv[1]);
		return 0;
	}
	
	return 0;
}
