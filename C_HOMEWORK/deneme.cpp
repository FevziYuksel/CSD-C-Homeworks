#define _CRT_SECURE_NO_WARNINGS
#include "homework.h"
#include "windows.h"
#include <string>
#include <iostream>

//int main(int argc, char* argv[])
//{
//	const char STACK_BEGIN = 'A'; //a lot of code 
//	register unsigned long int* STACK_NOW = NULL;
//
//	GetThreadContext((HANDLE)STACK_NOW, (LPCONTEXT)0);
//	//__asm
//	//{
//	//	mov esp, [STACK_NOW];
//	//};
//	
//
//	long long int stack_size = ((int)& STACK_BEGIN - *STACK_NOW); //rest of code 
//	printf("%lld", stack_size);
//	return 0;
//}

//using dim = unsigned int;

template <typename T, size_t Size, int D>
class matrix
{
private:
	T* buffer; 
	
public:
	size_t size;
	const int dimension;


	matrix () : buffer{ new T[Size] }, size { Size }, dimension{D} {}

	matrix (const matrix& m) : buffer{ new T[m.size] }, size{ m.size }, dimension{ m.dimension } {}

	matrix& operator= (const matrix& m)
	{
		std::swap(m.buffer, this->buffer);

		return *this;
	}

	~matrix()
	{
		delete[] buffer;
	}
};

typedef const int* IPTR;

int main2()
{
#define SIZE 10
	/*int buffer[SIZE];

	buffer[SIZE / 2] = 50;*/

	int a = 5;
	const IPTR b = &a;
	//*b = 2;
	//++b;
	auto p = b;
	++p;

	std::cout << *b;

	return 0;
}
