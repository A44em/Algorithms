#include <stdio.h>

void BinarySearch(int * x, int y, int v);

void main (void)
{
	int z,i,temp;
	int lst[] = {4,9,7,1,3,6,5};
	for (z = 0; z < 7 - 1; z++)
	{
		for (i = 0; i < 7; i++)
		{
			if (lst[i+1] < lst[i])
			{
				temp = lst[i];
				lst[i] = lst[i+1];
				lst[i+1] = temp;
			}
		}
	}
	BinarySearch(lst,7,9);
}

void BinarySearch (int * x, int y, int v)
{
	int z;
	int lst[7];
	for (z = 0; z < y; z++)
	{
		lst[z] = *x;
		x++;
	}
again:	
	if (v == lst[y/2])
	{
		printf("Found it! It's at %d\n",y/2);
	}
	else if (v < lst[y/2])
	{
		y = y / 2;
		goto again;
	}
	else
	{
		y = y * 3 / 2;
		goto again;
	}
}
