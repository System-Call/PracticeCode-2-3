#include<stdio.h>
#include<malloc.h>
typedef int ElemType;
typedef struct Dnode
{
	ElemType data;
	Dnode* prior;
	Dnode* next;
}DlinkNode;
