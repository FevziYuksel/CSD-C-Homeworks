#include <stdio.h>
#include <stdlib.h>

//C++ like C

typedef struct
{
	int a;

	void (*talk) (char*);
}obj;

obj* alloc_obj()
{
	return malloc(sizeof(obj));
}


void obj_talk(const char* word)
{
	printf(word);
}

int new_obj(obj* o, int a)
{

	o->a = a;
	o->talk = &obj_talk;

	return 0;
}


void delete_obj(obj* o)
{
	free(o);
	
}







