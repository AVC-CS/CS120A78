#include <iostream>
#include <fstream>
using namespace std;

int findcross(int[][10]);
void printout(int[][10], int);

int findcross(int M[][10])
{
}
void printout(int M[][10], int cnt)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << setw(5) << M[i][j];
		cout << endl;
	}
	cout << "Total found cross " << cnt << endl;
}
