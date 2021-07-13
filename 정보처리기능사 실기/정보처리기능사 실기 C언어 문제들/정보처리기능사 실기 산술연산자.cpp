#include<stdio.h>
int main(){
	int result1, result2;
	
	result1 = 10 + 15 % 4 - 20 % 9;
	result2 = 10 * 15 % 4 - 20 % 9 + 5;
	
	printf("result1 = %d\n", result1);
	printf("result2 = %d\n", result2);
	
	return 0;
}
