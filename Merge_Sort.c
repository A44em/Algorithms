#include <stdio.h>

static int * MergeSort(int * x, int y);

void main (void)
{
	int lst[] = {9,5,7,3,6,2,1};
	MergeSort(lst,sizeof(lst)/sizeof(int));
}

static int * MergeSort (int * x, int y)
{
	int i;
	int lst[y];
	for (i = 0; i < y; i++)
	{
		lst[i] = *x;
		x++;
	}
	if (y % 2 == 0)
	{
		int left[y/2];
		int right[y/2];
	}
	else
	{
		int left[y/2];
		int right[y/2+1];
	}
	
	for (i = 0; i < y; i++)
	{
		if (i < y/2)
		{
			left[i] = lst[i];
		}
		else
		{
			right[i - y/2] = lst[i];
		}
	}
	
	left = MergeSort(left,sizeof(left)/sizeof(int));
	right = MergeSort(right,sizeof(right)/sizeof(int));
	
	return merge(left,right);
}
