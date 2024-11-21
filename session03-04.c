#include <stdio.h>

int main()
{
	// khai bao ham 
	float firstNumber,secondNumber,tuesNumber; 
    float total,average;
	// nhap cac gia tri vao firstNumber secondNumber tuesNumber
	printf("Moi ban nhap diem mon toan;");
	scanf("%f",&firstNumber);
	printf("Moi ban nhap diem mon van;");
	scanf("%f",&secondNumber);
	printf("Moi ban nhap diem mon anh;");
	scanf("%f",&tuesNumber); 
	// tinh toan va in ra man hinh  
	total = firstNumber + secondNumber + tuesNumber;
	average = (firstNumber + secondNumber + tuesNumber)/3; 
	printf("Tong diem ba mon cua ban la: %.2f + %.2f + %.2f = %.2f\n",firstNumber,secondNumber,tuesNumber,total);
	printf("Diem trung binh cua ban la: (%.2f + %.2f + %.2f)/3= %.2f",firstNumber,secondNumber,tuesNumber,average);
	
}
	

