#include <iostream>
#include "../headers/Queue.hpp"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int size = 5;
	Queue<int> q(size);

	for (int i = 0; i < size; i++)
	{
		q.Push(i + 10);
	}

	cout << "������� �������� �������:" << endl;
	cout << q << endl;

	cout << endl;

	cout << "������� �� ������� ������ �������:" << endl;
	q.Pop();
	cout << q << endl;

	cout << endl;

	cout << "��������� � ������� ����� �������:" << endl;
	q.Push(125);
	cout << q << endl;

	system("pause");
	return 0;
}