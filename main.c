#include <stdio.h>
#include <stdlib.h>
#define SIZE 11//陣列大小 
void bubbleSort(char *element1Ptr,char *element2Ptr);//泡沫排序函數 (指向非常數資料的非常數指標) 
int main() {
	char a[SIZE]={22,7,5,6,8,12,20,18,14,16,2};//宣告陣列 
	int i,pass;
	printf("Original Data\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);//顯示原始陣列 
	}
	
	for(pass=0;pass<SIZE;pass++)
	{
		for(i=0;i<SIZE-1;i++)
		{
			if(a[i]> a[i+1])//判斷a[i]是否有大於a[i+1] 
			{
				bubbleSort(&a[i],&a[i+1]);//呼叫泡沫排序函數 
			}
		}
    } 
	
	printf("\nTrue Data\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);//顯示由小到大的陣列 
	}
	printf("\n");
}
