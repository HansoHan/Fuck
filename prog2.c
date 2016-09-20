#include <stdio.h>

int func(int money)
{	
	int cream, shrimp, cola;
	if(money<(500+700+400)){
		printf("돈이 모자라서 전부 구입할 수 없습니다. \n");
		return 0;
	}
	else{
		for(cream=1; cream<money/500; cream++){
			for(shrimp=1; shrimp<money/700; shrimp++){
				for(cola=1; cola<money/400; cola++){
					if(money==500*cream+700*shrimp+400*cola){
						printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", cream, shrimp, cola);
					}
				}
			}
		}
	}
}	

int main(int argc, char * argv[])
{
	if(argc!=2){
		printf("Input : [File Name] [Money] \n");
		return -1;
	}
	
	func(atoi(argv[1]));
	return 0;
}
