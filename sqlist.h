#ifndef _SQLIST_H_
#define _SQLIST_H_
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
/* C style code
typedef int ElemType;
typedef struct {
	ElemType * elem;
	int length;
	int listsize;
	int incrementsize;
} SqList;

void ErrorMessage(char * message);
void InitList(SqList* L); 
void DestroyList(SqList* L);
*/

template <class ElemType>
struct SqList{
	ElemType * elem;
	int length;
	int listsize;
	int incrementsize;
};

void ErrorMessage(char * message);

template <class ElemType>
void InitList(SqList<ElemType>* L) {
	// 构造一个最大容量为 LIST_INIT_SIZE的顺序表L；
	L->elem = new ElemType[LIST_INIT_SIZE];
	L->length = 0;
	L->listsize = LIST_INIT_SIZE;
	L->incrementsize = LISTINCREMENT;
}

template <class ElemType>
void DestroyList(SqList<ElemType>* L) {
	// 释放顺序表L所占存储空间；
	if (L) {
		delete[] L->elem;
		L->listsize = 0;
		L->length = 0;
		L->incrementsize = 0;
	}
	else {
		ErrorMessage("list doesn't exist\n");
		return;
	}
}

#endif

