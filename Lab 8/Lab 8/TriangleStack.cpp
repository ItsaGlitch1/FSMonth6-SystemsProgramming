#include "TriangleStack.h"

void TriangleStack::SetmBase(float base)
{
	mBase = base;
}

void TriangleStack::SetmHeight(float height)
{
	mHeight = height;
}

float TriangleStack::GetArea()
{
	return mBase * mHeight / 2;
}
