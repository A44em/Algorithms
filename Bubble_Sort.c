#include <stdio.h>

void BubbleSort(int * x, int y);

void main (void)
{
	int lst[] = {9,5,7,3,6,2,1};
	BubbleSort(lst,7);
}

void BubbleSort (int * x, int y)
{
	int z,i,temp;
	int lst[7];
	for (z = 0; z < y; z++)
	{
		lst[z] = *x;
		x++;
	}
	for (z = 0; z < y - 1; z++)
	{
		for (i = 0; i < y; i++)
		{
			if (lst[i+1] < lst[i])
			{
				temp = lst[i];
				lst[i] = lst[i+1];
				lst[i+1] = temp;
			}
		}
	}
	for (z = 0; z < y; z++)
	{
		printf("%d\n",lst[z]);
	}
	
}
