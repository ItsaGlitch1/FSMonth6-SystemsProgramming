#pragma once
class TriangleHeap
{
private:
	float* mBase = new float();
	float* mHeight = new float();
public:
	TriangleHeap();
	TriangleHeap& operator=(const TriangleHeap& other);
	TriangleHeap(const TriangleHeap& other);
	~TriangleHeap();
	void SetmBase(float base);
	void SetmHeight(float height);
	float GetArea();
};

