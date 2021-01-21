#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
void quick_sort(int a[], int low, int hight);
void show_arr(int a[], int len);

int main()
{
	int a[10] = {12,43,5,46,78,21,3,51,9,15};
	
	quick_sort(a, 0, 9);
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




void quick_sort(int a[], int low, int hight)
{
	int tmp;
	int i = low;
	int j = hight;
	tmp=a[i];  //将a[i]作为基准保存
	if(i < j)
	{
		while(i<j)
		{
			//从上界比较
			while(i<j&&tmp<=a[j])
				j--;

			//将a[i]交换到左边
			if(i<j)
				a[i]=a[j];

			//从下界比较
			while(i<j&&tmp>=a[i])
				i++;
			//将a[i]交换到右边
			if(i<j)
				a[j]=a[i];
		}
		a[i]=tmp;//将基准放到最终的位置
		quick_sort(a,low,i-1); //对前面部分进行排序
		quick_sort(a,i+1, hight); //对后面部分进行排序
	}

	return ;
}
