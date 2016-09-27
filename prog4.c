#include <stdio.h>

int main(void)
{
	int i=0;
	int temp, max=0, min;
	int arr[10];
	while(i!=10){
		printf("짝수가 10개가 될 때까지 입력 받기 %d : ", i+1);
		scanf("%d", &temp);
		if(temp%2==0){
			arr[i]=temp;
			i++;
		}
	}
	printf("배열 요소 모두 출력하기 : ");
	for(i=0; i<10; i++)
		printf("%d ", arr[i]);

	printf("\n 가장 큰 수 : ");
	for(i=0; i<10; i++){
		if(arr[i]>max)
			max=arr[i];
	}
	printf("%d \n 가장 작은 수: ", max);
	min=arr[0];
	for(i=1; i<10; i++){
		if(arr[i]<min)
			min=arr[i];
	}
	printf("%d \n", min);
	return 0;
}
