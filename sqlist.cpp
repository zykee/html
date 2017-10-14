#include "sqlist.h"
#include <stdio.h>
#include <malloc.h>

void ErrorMessage(char * message) {
	printf("%s\n", message);
}

/*  C style code 

void InitList(SqList* L) {
	// ����һ���������Ϊ LIST_INIT_SIZE��˳���L��
	L->elem = (ElemType *)malloc(LIST_INIT_SIZE* sizeof(ElemType));
	L->length = 0;
	L->listsize = LIST_INIT_SIZE;
	L->incrementsize = LISTINCREMENT;
}


void DestroyList(SqList* L) {
	// �ͷ�˳���L��ռ�洢�ռ䣻
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



