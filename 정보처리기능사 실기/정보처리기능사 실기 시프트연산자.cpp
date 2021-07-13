#include<stdio.h>
main(){
	int num1, num2, result;
	num1 = 20;
	num2 = 4;
	
	result = num1 >> 3 << num2;
	
	printf("%d", result);
	
	return 0;
}
