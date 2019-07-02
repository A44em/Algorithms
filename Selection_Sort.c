#include <stdio.h>

void SelectionSort(int * x, int y);

void main (void)
{
	int lst[] = {4,9,7,1,3,6,5};
	SelectionSort(lst,7);
}

void SelectionSort (int * x, int y)
{
	int z, i, j, num, temp = 0, index, smallest;
	int lst[7];
	for (z = 0; z < y; z++)
	{
		lst[z] = *x;
		x++;
	}

	for (i = 0; i < 7; i++)
	{
		index = 0;
		smallest = lst[i];
		for (j = i; j < 7; j++)
		{
			if (lst[j] < smallest)
			{
				smallest = lst[j];
				index = j;
			}
		}
		temp = lst[i];
		lst[i] = smallest;
		lst[index] = temp;
		printf("%d\n",lst[i]);
	}
}
