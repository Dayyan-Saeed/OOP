#pragma once
#include <iostream>
#include <cassert>

using namespace std;

template<class elemType> 
class DynamicArray {

protected:
	elemType* list; //array to hold the list elements
	int length;
	int maxSize;
	
public:
	bool isEmpty() const;
	bool isFull() const;
	void sort() ;
	bool search(const elemType& searchItem) const;
	void insert(const elemType& newElement);
	void insertAt(const elemType&, int);
	void print() const;
	void remove(const elemType& removeElement);
	void destroyList();
	void printList();

	int getLength(void)const;

	int getMaxSize()const;

	DynamicArray();
	DynamicArray(int listSize);

	~DynamicArray();
};

template <class elemType>
bool DynamicArray<elemType>::isEmpty() const {

	return (length == 0);
}

template <class elemType>
bool DynamicArray<elemType>::isFull() const {

	return (length == maxSize);
}

template <class elemType>
void DynamicArray<elemType>::sort() {

	int min;
	elemType temp;
	for (int i = 0; i < length; i++)
	{
		min = i;
		for (int j = i + 1; j < length; ++j)
			if (list[j] < list[min])
				min = j;
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}
}

template <class elemType>
bool DynamicArray<elemType>::search(const elemType& searchItem) const {

}

template <class elemType>
void DynamicArray<elemType>::insert(const elemType& newElement) {

}

template <class elemType>
void DynamicArray<elemType>::insertAt(const elemType& item, int position) {

	assert(position >= 0 && position < maxSize);
	list[position] = item;
	//length++;
}

template <class elemType>
void DynamicArray<elemType>::print() const
{
	for (int i = 0; i < length; ++i)
		cout << list[i] << " ";
	cout << endl;
}//end print

template <class elemType>
void DynamicArray<elemType>::remove(const elemType& removeElement) {

}

template <class elemType>
void DynamicArray<elemType>::destroyList() {

}

template <class elemType>
void DynamicArray<elemType>::printList() {

}

template <class elemType>
int DynamicArray<elemType>::getLength(void) const {

	return length;
}

template <class elemType>
int DynamicArray<elemType>::getMaxSize() const {

	return maxSize;
}

template <class elemType>
DynamicArray<elemType>::DynamicArray():DynamicArray(10) {

}

template<class elemType>
DynamicArray<elemType>::DynamicArray(int listSize) {


	maxSize = listSize;
	length = 0;
	list = new elemType[maxSize];
}

template<class elemType>
DynamicArray<elemType>::~DynamicArray() {

	delete[] list;
}
