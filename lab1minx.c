#include <stdio.h>

int main(){
	int x ;
	int y ;
	printf("x:");
	scanf("%d",&x);
	printf("y:");
	scanf("%d",&y);
	if (x>y){
		printf("x is greater than y");
		//diff of x and y
		printf("\n%d",(x-y));
	} else{
		printf("y is greater than x");
		//diff of x and y
		printf("\n%d",(y-x));
	}
}
