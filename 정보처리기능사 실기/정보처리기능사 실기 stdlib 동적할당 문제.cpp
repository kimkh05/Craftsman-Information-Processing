#include<stdio.h> // 입력, 출력 관련 헤더 파일 
#include<stdlib.h> // 난수 및 동적 메모리 할당 등 사용 
int function(int num1[], int num2[]){ // 서브 함수 생성 
	int *num; // 포인터 변수 
	int i, j, temp;
	num = malloc(sizeof(int)*6); //동적 메모리 할당
	 
	for(i = 0, j=3; i<3, j<6;i++, j++){ // 두가지 변수를 반복 
		num[i] = num1[i]; // num[0~2] = num1[0~2] 각각 대입 
		num[j] = num2[j]; // num[3~5] = num2[0~2] 각각 대입 
	} // num => 12, 23, 10, 18, 32, 52 
	for(int i = 0; i<=5; i++){ //배열의 값 확인 용도로 사용 
		for(int j = 0; j<i; i++){ // 나머지 배열의 값으로 비교 용도 
			if(num[i]>=num[j]){ //각 배열의 값을 비교 
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	} // temp 변수를 이용하여, num[i]의 갑과 num[j] 스왑 
	
	return num; // 포인터변수 NUM 반환 
	free(num); //동적메모리 할당 해제 
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
