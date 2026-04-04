#pragma once
#include <iostream>

using namespace std;

template <class T>
class MyArray
{
public:

	MyArray(int capacity);

	~MyArray();

	MyArray(const MyArray& arr);

	MyArray& operator=(const MyArray& arr) 
	{
		//cout << "MyArray deep copy operator..." << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];

		for (int i = 0; i < arr.m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		
		return *this;
	}

	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	int getCapacity();

	int getSize(); 

	void pushBack(const T& val);
	
	void popBack();

private:
	int m_Capacity;
	int m_Size;
	T* pAddress;
};