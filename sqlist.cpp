#include "sqlist.h"
#include <stdio.h>
#include <malloc.h>

void ErrorMessage(char * message) {
	printf("%s\n", message);
}

/*  C style code 

void InitList(SqList* L) {
	// 构造一个最大容量为 LIST_INIT_SIZE的顺序表L；
	L->elem = (ElemType *)malloc(LIST_INIT_SIZE* sizeof(ElemType));
	L->length = 0;
	L->listsize = LIST_INIT_SIZE;
	L->incrementsize = LISTINCREMENT;
}


void DestroyList(SqList* L) {
	// 释放顺序表L所占存储空间；
	if (L) {
		free(L->elem);
		L->listsize = 0;
		L->length = 0;
		L->incrementsize = 0;
	}
	else {
		ErrorMessage("list doesn't exist\n");
		return;
	}
}

*/



