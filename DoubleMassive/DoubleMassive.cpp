// DoubleMassive.cpp


#include <iostream>
#define N 100
#define M 200
using namespace std;

int main()
{
	int a[N][M];
	int i, j;
	int n, m, t;
	int imin, jmin, min, imax, jmax, max;
	int sum, upsum, undersum;
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			cout << "a[" << i << "][" << j << "]== ";
			cin >> a[i][j];
		}
	cout << "\n";
	cout << "MATRIX a \n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)

			cout << a[i][j] << "  ";
		cout << endl;
	}
	cout << "\n";
	cout << "Minimun&Maximum" << "\n";
	min = a[0][0];
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (a[i][j] < min)
			{
				min = a[i][j];
				imin = i;
				jmin = j;
			}
	cout << "minimum = " << min << "\n";
	max = min;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				imax = i;
				jmax = j;
			}
	cout << "maximum = " << max << "\n";
	cout << "\n";
	sum = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			sum = sum + a[i][j];
	cout << "SUmma = " << sum << "\n";
	cout << "\n";
	t = a[imin][jmin];
	a[imin][jmin] = a[imax][jmax];
	a[imax][jmax] = t;
	cout << "MATRIX REVERSE a" << "\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			cout << a[i][j] << "  ";
		cout << endl;
	}
	cout << "\n";
	cout << "[-------------Summa up&under------------]" << "\n";
	upsum = 0;
	for (n = 0; n < m; n++)
		for (m = 0; m > n; m++)
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					upsum = upsum + a[i][j];
	cout << "Summa UP = " << upsum;

}