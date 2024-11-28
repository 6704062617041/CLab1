#include <stdio.h>

int main(){
	int x = 15;
	int y = 20;
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
