#include<stdio.h>
int main(void){
	int num1, num2, result1, result2;
	num1 = 38;
	num2 = 11;
	result1 = num1 & num2;
	result2 = num1 | num2;
	printf("result1 = %d\n", result1);
	printf("result2 = %d\n", result2);
	return 0;
} 
