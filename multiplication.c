#include <stdio.h>
int main()
{
	int value;
	printf("enter the value\n");
	scanf("%d", &value);

	for(int i=1; i<=10; i++)
	{
		int multiply = value * i;
		printf("%d\n",multiply);
	}
	return 0;
}