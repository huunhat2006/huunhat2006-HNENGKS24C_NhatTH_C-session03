#include <stdio.h>

int main()
{
	// khai bao bien 
	float firstNumber,secondNumber; 
	float acreage;

	 
	// nhap gia tri  cho bien firstNumber secondNumber 
	printf("Moi nhap gia tri canh day:");
	scanf("%f",&firstNumber);
	printf("Moi nhap gia tri chieu cao:");
	scanf("%f",&secondNumber);
	
    acreage = (firstNumber * secondNumber) / 2;
	
	printf("Dien tich hinh tam giac la: (%.2f * %.2f) / 2=%.2f",firstNumber,secondNumber,acreage); 
    
	 return 0;
}
