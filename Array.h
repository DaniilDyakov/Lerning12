#ifndef ARRAY_H_
#define ARRAY_H_
class Array
{
private:
	int *myData;
	size_t mySize;
	Array(Array &a); //конструктор копий
public:
	Array(size_t size); //конструктор
	~Array(); //деструктор
	void set(int i, int val);
	int get(int i);
	size_t getSize();
};
#endif
