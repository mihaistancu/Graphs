#include <iostream>
#include "Graph.cpp"
using namespace std;


int st[10];
int n;


void tipar(int p)
{
	for (int i = 0; i <= p; i++)
	{
		cout << st[i];
	}
	cout << endl;

}

void back(int p)
{
	for (int i = 0; i <= 1; i++)
	{
		st[p] = i;
		if (p == n - 1)
			tipar(p);
		else
			back(p + 1);
	}
}

void main()
{
	Graph g(3);
	g.AddEdge(0, 1);
	g.AddEdge(0, 2);
}