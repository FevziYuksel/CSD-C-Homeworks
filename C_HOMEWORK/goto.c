#include <stdio.h>
#include <stdlib.h>


int func(int a)
{

}

int main(void)
{
LABEL:
	printf("local jump");
	goto LABEL;


	return 0;
}


