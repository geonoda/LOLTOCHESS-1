#include <stdio.h>
#define N 20

int main(void)
{
	int i;
	int j;
	for(i=0; i<N; i++)
	{
		for(j=i; j<N; j++)
		{
			printf("   ");
		} 
		for(j=0; j<i; j++)
		{
			printf("�ڡ�");
		}
		for(j=0; j<i-1; j++)
		{
			printf("��");
		 } 
		
		
		printf("\n"); 
	}
	return 0;
}
