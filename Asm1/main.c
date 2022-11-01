#include <stdio.h>

int str_length(char *str);

int main()
{
	char User_arr[100];
	char length_of_user_arr;
	char find_index ;
	char i; // index of for loop
	/*User input string */
	printf("Input string: ");
	fflush(stdin);
	gets(User_arr);
	/*User input character need check*/
	printf("Input charactor you need find: ");
	fflush(stdin);
	scanf("%c",&find_index);
	/*Solution*/
	length_of_user_arr = str_length(&User_arr);
	for(i = 0; i < length_of_user_arr ; i ++)
	{
		if(find_index == User_arr[i])
		{
			printf("Position %c appear : %d \n",find_index,i);
		}
	}
	return 0;
}

int str_length(char str[]) {
    int count; 
    for (count = 0; str[count] != '\0'; ++count);
    return count; 
}



