#include <iostream>
#include <vector>
#include "TriangleStack.h"
#include "TriangleHeap.h"


int AddNumbersAndReturn(int* a, int* b);
void AddNumbersVoid(int a, int b, int* sum);
void SwapValues(int* a, int* b);
int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1);
	_CrtDumpMemoryLeaks();
	srand(time(NULL));

	TriangleStack Stack1;
	Stack1.SetmBase((float)rand());
	Stack1.SetmHeight((float)rand());
	TriangleStack Stack2;
	Stack2.SetmBase((float)rand());
	Stack2.SetmHeight((float)rand());
	std::vector<TriangleStack> Stacks;
	Stacks.push_back(Stack1);
	Stacks.push_back(Stack2);
	for (int i = 0; i < Stacks.size(); i++)
	{
		std::cout << Stacks[i].GetArea() << std::endl;
	}

	TriangleHeap Heap1;
	Heap1.SetmBase((float)rand());
	Heap1.SetmHeight((float)rand());
	TriangleHeap Heap2;
	Heap2.SetmBase((float)rand());
	Heap2.SetmHeight((float)rand());
	std::vector<TriangleHeap> Heaps;
	Heaps.push_back(Heap1);
	Heaps.push_back(Heap2);
	for (int i = 0; i < Heaps.size(); i++)
	{
		std::cout << Heaps[i].GetArea() << std::endl;
	}
}
int AddNumbersAndReturn(int* a, int* b)
{
	return *a + *b;
}
void AddNumbersVoid(int a, int b, int* sum)
{
	*sum = a + b;
}
void SwapValues(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}