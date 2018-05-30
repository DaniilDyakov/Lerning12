#include <iostream>
#include "Array.h"
using namespace std;
Array::Array(size_t size)
{
	mySize = size;
	myData = new int[mySize];
}
Array::~Array()
{
	delete[] myData;
}
void Array::set(int i, int val)
{
	if (i < 0 || i >(mySize - 1))
		return;
	myData[i] = val;
}
int Array::get(int i)
{
	if (i < 0 || i >(mySize - 1))
		return -1;
	return myData[i];

}
Array::Array(Array &a)
{
	mySize = a.mySize;
	myData =new int[mySize];
	for (size_t i = 0; i < mySize; i++)
	{
		myData[i] = a.myData[i];
	}
}
size_t Array::getSize()
{
	return mySize;
}
Array& Array::operator = (Array &a)
{
	if (this != &a) //this - ��������� � ������ �� ������ ����
	{


		mySize = a.mySize;
		delete[] myData;
		myData = new int[mySize];
		for (int i = 0; i < mySize; i++)
		{
			myData[i] = a.myData[i];
		}
	}
	return *this;
}
