#include <stdio.h>
void Draw_Triangle(int num);
int main()
{
	int num ;
	/*User input*/
	printf("Input number: ");
	scanf("%d", &num);
	/*Solution*/
	Draw_Triangle(num);
	return 0;
}

void Draw_Triangle(int num){
	/*i and j of for loop*/
	int i;
	int j;
	/*element of regtang*/
	int crow ;
	int column ;
	crow = num;
	column = num;
	for ( i = 1; i <= num; i++)
	{
	    for ( j = 1; j <= 2 * num - 1; j++)
	    {
	        if (j == column || j == crow || i== num)
	        {
	         	printf("*");
			}
	        else
	        {
	         	printf(" ");
			} 
	    }
	    crow--;
	    column++;
	    printf("\n");
	}
}
