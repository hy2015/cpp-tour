#include "MyArray.h"

template <class T>
MyArray<T>::MyArray(int capacity)
{
	cout << "MyArray contructor with parameter..." << endl;
	this->m_Capacity = capacity;
	this->m_Size = 0;
	this->pAddress = new T[this->m_Capacity];
}

template <class T>
MyArray<T>::~MyArray()
{
	cout << "MyArray decontructor..." << endl;
	if (this->pAddress != NULL)
	{
		delete[] this->pAddress;
		this->pAddress = NULL;
	}
}

template <class T>
MyArray<T>::MyArray(const MyArray& arr)
{
	cout << "MyArray deep copy constructor..." << endl;
	this->m_Capacity = arr.m_Capacity;
	this->m_Size = arr.m_Size;

	this->pAddress = new T[arr.m_Capacity];

	for (int i = 0; i < arr.m_Size; i++)
	{
		this->pAddress[i] = arr.pAddress[i];
	}

}

template <class T>
void MyArray<T>::pushBack(const T& val)
{
	if (this->m_Capacity == this->m_Size)
	{
		cout << "The array is full now." << endl;
		return;
	}

	this->pAddress[this->m_Size] = val;
	this->m_Size++;
}

template <class T>
void MyArray<T>::popBack()
{
	if (this->m_Size == 0)
	{
		return;
	}
	this->m_Size--;
}

template <class T>
int MyArray<T>::getCapacity()
{
	return this->m_Capacity;
}

template <class T>
int MyArray<T>::getSize()
{
	return this->m_Size;
}