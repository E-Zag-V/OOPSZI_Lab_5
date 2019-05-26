#pragma once
#include <iostream>

using namespace std;

template <typename T>
class Queue
{
private:
	int size, pos;
	T *arr;

public:
	Queue(int _size);

	int GetSize();
	void Push(const T &el);
	T Pop();
	T Peek();

	friend std::ostream& operator<< <>(std::ostream &out, const Queue<T> &q);
};

template <typename T>
Queue<T>::Queue(int _size) : size(_size), pos(0), arr(new T[size]) {}

template <typename T>
int Queue<T>::GetSize() { return size; }

template <typename T>
void Queue<T>::Push(const T &el)
{
	if (pos != size) arr[pos] = el;
	else return;
	pos++;
}

template <typename T>
T Queue<T>::Pop()
{
	T tmp;
	tmp = arr[0];

	for (int i = 1; i < pos; i++)
	{
		arr[i - 1] = arr[i];
	}
	arr[pos - 1] = 0;
	pos--;

	return tmp;
}

template <typename T>
T Queue<T>::Peek()
{
	return arr[0];
}

template <typename T>
ostream& operator<< (ostream &out, const Queue<T> &q)
{
	for (int i = 0; i < q.pos; i++)
	{
		out << i + 1 << " element: " << q.arr[i] << endl;
	}

	return out;
}