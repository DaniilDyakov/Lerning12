#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
	Array a(10);
	for (int i = 0; i < a.getSize; i++)
	{
		a.set(i, 1);
	}

//	system("pause");
	return 0;
}
