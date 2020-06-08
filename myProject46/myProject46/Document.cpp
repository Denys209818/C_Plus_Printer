#include "libs.h"
#include "Header.h"

Document::Document()
{

}
Document::Document(string name, int size)
{
	this->name = name;
	this->size = size;
}

string Document::GetName()
{
	return this->name;
}

int Document::GetSize()
{
	return this->size;
}