#include <stdio.h>


int ReturnMax(int n1, int n2, int n3)
{
	int Max = 0;
	if (n1 >= n2)
		Max = (n1 >= n3) ? n1 : n3;
	else if (n2 >= n1)
		Max = (n2 >= n3) ? n2 : n3;
	return Max;
}

int ReturnMin(int n1, int n2, int n3)
{
	int Min = 0;
	if (n1 <= n2)
		Min = (n1 <= n3) ? n1 : n3;
	else if (n2 <= n1)
		Min = (n2 <= n3) ? n2 : n3;
	return Min;
}

int main(int argc, char * argv[])
{
	if (argc != 4){
		printf("You should input three arguments additionally. \n");
		return -1;
	}

	printf("가장 큰 수 : %d \n", ReturnMax(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])));
	printf("가장 작은 수 : %d \n", ReturnMin(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])));
	return 0;
}