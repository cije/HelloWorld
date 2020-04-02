
//顺序表基本运算算法
#include <stdio.h>
#include <malloc.h>

#define MaxSize 50

typedef char ElemType; 

typedef struct 
{	ElemType data[MaxSize];		//存放顺序表元素
   	int length;					//存放顺序表的长度
} SqList;					//顺序表的类型
//顺序表基本运算算法
void InitList(SqList *&L)
{
	L=(SqList *)malloc(sizeof(SqList));	//分配存放线性表的空间
	L->length=0;
}
void DestroyList(SqList *&L)
{
	free(L);
}
bool ListEmpty(SqList *L)
{
	return(L->length==0);
}
int ListLength(SqList *L)
{
	return(L->length);
}
void DispList(SqList *L)
{
	for (int i=0;i<L->length;i++)
		printf("%c ",L->data[i]);
	printf("\n");
}
bool GetElem(SqList *L,int i,ElemType &e)
{
	if (i<1 || i>L->length)
		return false;
	e=L->data[i-1];
	return true;
}
int LocateElem(SqList *L, ElemType e)
{
	int i=0;
	while (i<L->length && L->data[i]!=e) i++;
	if (i>=L->length)
		return 0;
	else
		return i+1;
}
bool ListInsert(SqList *&L,int i,ElemType e)
{
	int j;
	if (i<1 || i>L->length+1)
		return false;
	i--;						//将顺序表位序转化为elem下标
	for (j=L->length;j>i;j--) 	//将data[i]及后面元素后移一个位置
		L->data[j]=L->data[j-1];
	L->data[i]=e;
	L->length++;				//顺序表长度增1
	return true;
}
bool ListDelete(SqList *&L,int i,ElemType &e)
{
	int j;
	if (i<1 || i>L->length)
		return false;
	i--;						//将顺序表位序转化为elem下标
	e=L->data[i];
	for (j=i;j<L->length-1;j++)	//将data[i]之后的元素前移一个位置
		L->data[j]=L->data[j+1];
	L->length--;				//顺序表长度减1
	return true;
}


int main()
{

 
	SqList *L;
	InitList(L);

	int i;
	for(i=1;i<=5;i++)
		ListInsert(L,i,'a'+i-1);
    printf("线性表为：");
	DispList(L);
    printf("线性表的长度为：%d\n",ListLength(L));

	if(ListEmpty(L))
		printf("空表\n");
	else 
		printf("非空表\n");


	char elem;

	if( GetElem(L,3,elem)  )
		printf("线性表第3个元素是：%c\n",elem);

	printf("元素a的位置是第%d个\n",LocateElem(L,'a'));

	ListInsert(L,4,'f');
	printf("插入f之后的线性表为：");
	DispList(L);

	printf("删除第3个元素之后的线性表为：");
	if(  ListDelete(L,3,elem)  )
		DispList(L);

	DestroyList(L);

	return 1;
}