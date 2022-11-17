#pragma once
class Base
{
private:
	char* name = nullptr;
public:
	Base();
	Base& operator=(Base& other);
	Base(Base& other);
	~Base();
	void SetName(char* _name);
	char* GetName();
	virtual void DisplayRecord() = 0;
};