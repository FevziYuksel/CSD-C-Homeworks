#include <stdio.h>
#include <stdlib.h>

#ifndef NULL
#define NULL (void*)0x000ull
#endif //NULL

typedef struct _snode
{
	void* data;
	struct _snode* next;
} snode;

typedef struct _node
{
	void* data;
	struct _node* next;
	struct _node* previous;
} node;

typedef struct _list
{
	size_t size;
	node* begin;
	node* end;
}list;









