#pragma once
#include "libs.h"

class Spooler;

class Document
{
private:
	string name;
	int size;
public:
	Document();

	Document(string name, int size);

	string GetName();

	int GetSize();
};

class Spooler
{
private:
	int size = 0;
	enum { MAX_SIZE = 100 };
	Document arr[MAX_SIZE];
	int prioritet[MAX_SIZE];
public:
	Spooler();

	Spooler(Document doc, int prior);

	Document Pop();

	void Push(Document doc, int pr);

	bool empty();

	friend class Printer;
};

class Printer
{
private:
	Spooler* doc;
	int time;
public:
	Printer();

	Printer(Spooler& doc);

	void PrintDoc();
};

template<typename T>
class Stack
{
private:
	int size = 0;
	enum { MAX_SIZE = 100 };
public:
	T arr[MAX_SIZE];

	void Push(T a);

	T Pop();

	bool Empty();

	int GetSize();

	T operator[] (int ind);
};

template<typename T>
Stack <T> Sort(Stack<T>& obj);

template<typename T>
Stack <T> Sort_(Stack<T>& obj);




//layouts functions

template<typename T>
void Stack<T>::Push(T a)
{
	this->arr[this->size] = a;
	this->size++;
}

template<typename T>
T Stack<T>::Pop()
{
	this->size--;
	return this->arr[this->size];
}

template<typename T>
bool Stack<T>::Empty()
{
	return this->size == 0;
}

template<typename T>
int Stack<T>::GetSize()
{
	return this->size;
}

template<typename T>
T Stack<T>::operator[] (int ind)
{
	return this->arr[ind];
}

template<typename T>
Stack <T> Sort(Stack<T>& obj)
{
	for (int i = 0; i < obj.GetSize(); i++)
	{
		for (int i = 0; i < obj.GetSize() - 1; i++)
		{
			if (obj.arr[i] > obj.arr[i + 1])
			{
				int temp = obj.arr[i];
				obj.arr[i] = obj.arr[i + 1];
				obj.arr[i + 1] = temp;
			}
		}
	}
	return obj;
}

template<typename T>
Stack <T> Sort_(Stack<T>& obj)
{
	for (int i = 0; i < obj.GetSize(); i++)
	{
		for (int i = 0; i < obj.GetSize() - 1; i++)
		{
			if (obj.arr[i] < obj.arr[i + 1])
			{
				int temp = obj.arr[i];
				obj.arr[i] = obj.arr[i + 1];
				obj.arr[i + 1] = temp;
			}
		}
	}
	return obj;
}
