#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void genericswap(void *a,void *b,int size)
{
	void *tempmemory=malloc(size);//make a memory of size bytes
	memcpy(tempmemory,a,size);
	memcpy(a,b,size);
	memcpy(b,tempmemory,size);	
	free(tempmemory);
} 
int main()
{
	
	int arr[3];
	double brr[5];
	printf("size=%d\n",sizeof('a'));
	printf("size=%d\n",sizeof("a"));
	printf("size=%d\n",sizeof(float));
	printf("size=%d\n",sizeof(arr));
	printf("size=%d\n",sizeof(brr));
	printf("size=%d\n",sizeof(brr[1]));
	int a;
	int *ptr1=&a;
	printf("size=%d\n",sizeof(a));
	printf("size=%d\n",sizeof(ptr1));
	int *ptr2=arr;
	printf("size=%d\n",sizeof(ptr2));//ptr2 just point to the memory spcace of the first element in the array and it doesn't know how large the static array takes up
	
	
	//pinpoint to nju homework 
	int c=97;
	void *p=&c;
	printf("%d\n",*(int *)p);
	printf("%c\n",*(int *)p);
	
	//
	double ave1=90.5,ave2=89.7;
	genericswap(&ave1,&ave2,sizeof(double)); 
	printf("%.2lf\n%.2lf\n",ave1,ave2);
	int m=10,n=20;
	genericswap(&m,&n,sizeof(int)); 
	printf("%d\n%d\n",m,n);
} 
