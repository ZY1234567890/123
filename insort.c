#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

void insert_sort(int a[], int len);
void show_arr(int a[], int len);
int main()
{
	int a[10] = {12,43,5,46,78,21,3,51,9,15};
        insert_sort(a, 10);
	
	show_arr(a, 10);

	return 0;
}

void show_arr(int a[], int len)
{
	int i = 0;

	for(i = 0; i < len; i++)
	{
		printf("%-4d", a[i]);
	}

	printf("\n");
}

void insert_sort(int a[], int len)
{
	int i = 0;
	int j = 0;

	int temp = 0;
	
	for(i = 1; i < len; i++)
	{
		temp = a[i];
		j = i-1;
		while(a[j] > temp && j >= 0)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}

}



