/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that sorts these scores in descending order.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40).
Output for this will be [ { "stud3", 40 }, { "stud2", 30 }, { "stud1", 20 } ]

INPUTS: Array of structures of type student, length of array.

OUTPUT: Sort the array in descending order of scores.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

struct student {
	char name[10];
	int score;
};
void sort(struct student *students, int len)
{
	int i, j;
	struct student s;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (students[j + 1].score > students[j].score)
			{
				s = students[j + 1];
				students[j + 1] = students[j];
				students[j] = s;
			}
		}
	}
}
void * scoresDescendingSort(struct student *students, int len) {
	int i,j;
	if (students == NULL)
		return NULL;
	else if (len == 1)
		return NULL;
	else
		sort(students,len);
	return NULL;
}