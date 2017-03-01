#include <iostream>
using namespace std;
class Graph
{
	int n;
	int a[10][10];

public:
	Graph(int n)
	{
		this->n = n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				a[i][j] = 0;
	}
	void AddEdge(int startNode, int endNode)
	{
		a[startNode][endNode] = 1;
		a[endNode][startNode] = 1;
	}
	void Print()
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << a[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
};