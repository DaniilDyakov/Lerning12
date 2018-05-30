#ifndef ARRAY_H_
#define ARRAY_H_
class Array
{
private:
	int *myData;
	size_t mySize;
	Array(Array &a); //����������� �����
public:
	Array(size_t size); //����������� ������� �������
	~Array(); //����������
	void set(int i, int val);
	int get(int i);
	size_t getSize();
	Array& operator = (Array &a);
};
#endif
