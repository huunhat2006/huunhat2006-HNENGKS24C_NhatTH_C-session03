#include <stdio.h>

int main()
{
	// khai bao bien 
	int firstNumber;
	float perimeter,acreage;
	float x = 3.14;
	 
	// nhap gia tri ban kinh cho bien firstNumber
	printf("Moi nhap gia tri ban kinh:");
	scanf("%d",&firstNumber);
	
    perimeter = x * 2 * firstNumber;
    
    printf("Chu Vi hinh tron la: %d * x * 2=%.2f\n",firstNumber,perimeter);
    
    acreage = firstNumber * firstNumber * x;
	
	printf("Dien tich hinh tron la: %d * %d * x=%.2f",firstNumber,firstNumber,acreage); 
    
	 return 0;
}
