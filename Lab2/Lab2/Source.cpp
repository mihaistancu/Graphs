#include <iostream>
#include "Graph.cpp"
using namespace std;


int st[10];
int n;


void Print()
{
	Graph g(n);
	int k = 0;
	for(int i=0;i<n;i++)
		for (int j = i + 1; j < n; j++)
		{
			if (st[k++] == 1)
			{
				g.AddEdge(i, j);
			}
		}
	g.Print();
}


void Backtrack(int p)
{
	for (int i = 0; i <= 1; i++)
	{
		st[p] = i;
		if (p == (n*n-n)/2-1)
			Print();
		else
			Backtrack(p + 1);
	}
}

void main()
{
	
	cin >> n;
	Backtrack(0);

}