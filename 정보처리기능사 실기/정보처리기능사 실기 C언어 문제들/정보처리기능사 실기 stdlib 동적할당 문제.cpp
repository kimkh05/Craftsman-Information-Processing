#include<stdio.h> // �Է�, ��� ���� ��� ���� 
#include<stdlib.h> // ���� �� ���� �޸� �Ҵ� �� ��� 
int function(int num1[], int num2[]){ // ���� �Լ� ���� 
	int *num; // ������ ���� 
	int i, j, temp;
	num = malloc(sizeof(int)*6); //���� �޸� �Ҵ�
	 
	for(i = 0, j=3; i<3, j<6;i++, j++){ // �ΰ��� ������ �ݺ� 
		num[i] = num1[i]; // num[0~2] = num1[0~2] ���� ���� 
		num[j] = num2[j]; // num[3~5] = num2[0~2] ���� ���� 
	} // num => 12, 23, 10, 18, 32, 52 
	for(int i = 0; i<=5; i++){ //�迭�� �� Ȯ�� �뵵�� ��� 
		for(int j = 0; j<i; i++){ // ������ �迭�� ������ �� �뵵 
			if(num[i]>=num[j]){ //�� �迭�� ���� �� 
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	} // temp ������ �̿��Ͽ�, num[i]�� ���� num[j] ���� 
	
	return num; // �����ͺ��� NUM ��ȯ 
	free(num); //�����޸� �Ҵ� ���� 
} 
int main(){
		int A[] = {12, 23, 10};
		int B[] = {18, 32, 52};
		int *C = malloc(sizeof(int)*6);
		C = function(A, B);
		
		for(int i = 0; i<6; i++){
			printf("%d ", C[i]);
		}
		free(C);
}
