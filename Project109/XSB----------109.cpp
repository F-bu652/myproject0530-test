#include<stdio.h>
int main()
{
	//完成须有元素的赋值并将其显示出来。
	int table[16]{ 1,1,1,1 };
	int i = 0;
	//不必在意这里的值，这里的1只是为了方便后面的计数。
	for(i = 1;i <= 8;i++)
	{
		table[i] = 1;
	}
	for (i = 1;i <= 8;i++)
	{
		printf("%d  ", table[i]);
	}

	printf("\n");

	int baoshu = 0;
	int index = 0;
	int count = 0;

	while (count>0)
	{
		index++;
		baoshu++;
		//完成迭代（即一次循环）
		while (table[index]==0)
		{
			//重要环节：清除已经完成任务的元素，让还未完成任务的元素继续参与循环。
			index++;
			if (index > 8)
			{
				//与开头赋值的位置有关,若前面改动，这里可以与它一起动。
				index = 1;
			}
		}
		//将已经完成任务的清退。
		while (baoshu == 3)
		{
			table[index] = 0;
			printf("%d  ", index);
			count--;
			baoshu = 0;
		}
	}
	return 0; 
}