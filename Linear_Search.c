#include <stdio.h>

void LinearSearch(int * x, int y, int v);

void main (void)
{
	int lst[] = {4,9,7,1,3,6,5};
	LinearSearch(lst,7,4);
}

void LinearSearch (int * x, int y, int v)
{
	int z;
	int lst[7];
	for (z = 0; z < y; z++)
	{
		lst[z] = *x;
		if (lst[z] == v)
		{
			printf("Found! It is at %d\n", z);
			return;
		}
		x++;
	}
	printf("This element is not in the array\n");
}
