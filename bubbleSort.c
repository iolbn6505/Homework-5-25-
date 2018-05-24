void bubbleSort(char *element1Ptr,char *element2Ptr)
{
	int hold;
	hold=*element1Ptr;
	*element1Ptr= *element2Ptr;
	*element2Ptr=hold;
}


