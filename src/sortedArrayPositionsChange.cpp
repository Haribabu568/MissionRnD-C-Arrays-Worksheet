/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i, a, p1 = -1, p2 = -1,j=len-1;
	if ((Arr == NULL)||len <=0)
		return NULL;
	else{
		for (i = 0; i < len; i++)
		{
			if (Arr[i] > Arr[i + 1])
			{
				p1 = i;
				for (; j > i; j--)
				{
					if (Arr[j] < Arr[j - 1])
					{
						p2 = j;
						break;
					}
				}
				break;
			}
			
		}

		if (p1 >= 0 && p2 >= 0)
		{
			a = Arr[p1];
			Arr[p1] = Arr[p2];
			Arr[p2] = a;
		}
	}
}