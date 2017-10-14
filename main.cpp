#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"
int main(int argc, char* argv) {
/*  //C style
    SqList mylist;  
    SqList * pmylist;
    pmylist = NULL; // empty sqlist pointer;
 */
  
	SqList<int> mylist;
	SqList<int> * pmylist;

	pmylist = NULL; // empty sqlist pointer;
	DestroyList(pmylist);//destroy an NULL list

    InitList(&mylist);   //  init a list
 //   DestroyList(&mylist);//  distroy my list

    printf("my list length = %d \n", mylist.length);
    printf("my list listsize = %d \n", mylist.listsize);
    printf("my list incrementsize = %d \n", mylist.incrementsize);
    system("pause");
}