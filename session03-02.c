#include <stdio.h>

int main()
{
	// khai bao bien 
	float celrius;
	float fahrenheit;
	// nhap gia tri cho bien celrius tu ban phim
	printf("Moi nhap nhien do:");
	scanf("%f",&celrius);
	// tinh toan doi tu do c sang do f
	
	fahrenheit = celrius * 1.8 + 32;  
	printf("Do F la: %.2f * 1.8 + 32 = %.2f",celrius,fahrenheit);
	 return 0; 

 }

