#include <stdio.h>
#include <stdlib.h>
#define SIZE 11//�}�C�j�p 
void bubbleSort(char *element1Ptr,char *element2Ptr);//�w�j�ƧǨ�� (���V�D�`�Ƹ�ƪ��D�`�ƫ���) 
int main() {
	char a[SIZE]={22,7,5,6,8,12,20,18,14,16,2};//�ŧi�}�C 
	int i,pass;
	printf("Original Data\n");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);//��ܭ�l�}�C 
	}
	
	for(pass=0;pass<SIZE;pass++)
	{
		for(i=0;i<SIZE-1;i++)
		{
			if(a[i]> a[i+1])//�P�_a[i]�O�_���j��a[i+1] 
			{
				bubbleSort(&a[i],&a[i+1]);//�I�s�w�j�ƧǨ�� 
			}
		}
    } 
	
	printf("\nTrue Data\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);//��ܥѤp��j���}�C 
	}
	printf("\n");
}
