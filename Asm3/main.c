#include<stdio.h>

char cout_zero_in_binary(char number);
char cout_one_in_binary(char number);
int main()
{
	int num;
	/*User input*/
	printf("Nhap gia tri: ");
	scanf("%d", &num);
	/*Display result*/
	printf("Tong cac so 0 cua %d la: %d\n", num, cout_zero_in_binary(num));
	printf("Tong cac so 1 cua %d la: %d\n", num, cout_one_in_binary(num));
	return 0;
}
char cout_zero_in_binary(char number)
{
	char result = 0;
	char index = 0;
	for (index = 7 ; index >=0; index--)
	{
		if(((number >> index ) & 0x01) == 0)
		{
			result ++;
		}
		
	}
	return result;
}

char cout_one_in_binary(char number)
{
	char result = 0;
	char index = 0;
	for (index = 7 ; index >=0; index--)
	{
		if(((number >> index ) & 0x01) == 1)
		{
			result ++;
		}
		
	}
	return result;
}
