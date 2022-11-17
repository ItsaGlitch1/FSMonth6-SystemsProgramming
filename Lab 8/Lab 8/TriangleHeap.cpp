#include "TriangleHeap.h"

TriangleHeap::TriangleHeap()
{}


TriangleHeap& TriangleHeap::operator=(const TriangleHeap& other)
{
	if (this != &other)
	{
		SetmBase(*other.mBase);
		SetmHeight(*other.mHeight);
	}
	return *this;
}

TriangleHeap::TriangleHeap(const TriangleHeap& other)
{
	*this = other;
}

TriangleHeap::~TriangleHeap()
{
	delete mBase;
	delete mHeight;
}

void TriangleHeap::SetmBase(float base)
{
	*mBase = base;
}

void TriangleHeap::SetmHeight(float height)
{
	*mHeight = height;
}

float TriangleHeap::GetArea()
{
	return *mBase * *mHeight / 2;
}
