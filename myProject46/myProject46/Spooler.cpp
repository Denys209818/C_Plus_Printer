#include "libs.h"
#include "Header.h"

Spooler::Spooler()
{

}

Spooler::Spooler(Document doc, int prior)
{
	arr[size] = doc;
	prioritet[size] = prior;
	size++;
}

Document Spooler::Pop()
{
	int a = prioritet[0];
	int ind = -1;
	for (int i = 0; i < this->size; i++)
	{
		if (prioritet[i] >= a)
		{
			a = prioritet[i];
			ind = i;
		}
	}
	Document d;
	if (this->size > 0) d = this->arr[ind];
	for (int i = ind; i < this->size - 1; i++)
	{
		this->arr[i] = this->arr[i + 1];
	}
	this->size--;
	return d;
}

void Spooler::Push(Document doc, int pr)
{
	this->arr[this->size] = doc;
	this->prioritet[this->size] = pr;
	this->size++;
}

bool Spooler::empty()
{
	return this->size == 0;
}