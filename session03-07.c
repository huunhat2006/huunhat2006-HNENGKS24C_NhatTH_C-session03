#include <stdio.h>

int main()
{
	// khai bao bien 
	int firstNumber;
	int total = 0;
	// nhap gia tri cho firstNumber tu ban phim 
	printf("Moi ban nhap so co bon chu so:");
	scanf("%d",&firstNumber);
	{
	total+=firstNumber%10;
		firstNumber/=10;	
    }
	printf("Tong cac chu so tu so ban vua nhap la:%d",total);
	 return 0; 
 }

