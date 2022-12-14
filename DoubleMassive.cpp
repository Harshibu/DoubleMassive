#include <iostream>
#include <clocale>
#define N 100
#define M 200
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[N][M];
	int i, j;
	int n, m, t;
	int min, max;
	int imin, jmin, imax, jmax;
	int sum, upsum, undersum;
	cout << "Введите количество строк матрицы = ";
	cin >> n;
	cout << "Введите количество столбцов матрицы = ";
	cin >> m;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			cout << "a[" << i << "][" << j << "]== ";
			cin >> a[i][j];
		}
	cout << "\n";
	cout << "Матрица \n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)

			cout << a[i][j] << "  ";
		cout << endl;
	}
	cout << "\n";
	cout << "Минимум и Максимум \n";
	min = a[0][0];
	imin = 0;
	jmin = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (a[i][j] < min)
			{
				min = a[i][j];
				imin = i;
				jmin = j;
			}
	cout << "Минимум = " << min << "\n";
	max = min;
	imax = 0;
	jmax = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				imax = i;
				jmax = j;
			}
	cout << "Максимум = " << max;
	cout << "\n";
	sum = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			sum = sum + a[i][j];
	}
	cout << "\n";
	cout << "Сумма элементов матрицы = " << sum << "\n";
	cout << "\n";
	t = a[imin][jmin];
	a[imin][jmin] = a[imax][jmax];
	a[imax][jmax] = t;
	cout << "Матрица Изменённая" << "\n";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			cout << a[i][j] << "  ";
		cout << endl;
	}
	undersum = 0;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j < i; j++)
			undersum = undersum + a[i][j]; // Главная диагональ идёт с левого верхнего элемента до крайнего правого.
		cout << endl;
	}
	cout << "Сумма под главной диагональю = " << undersum;
	upsum = 0;
	for(j = 0; j < m; j++)
	{
		for (i = 0; i < j; i++)
			upsum = upsum + a[i][j];
		cout << endl;
	}
	cout << "Сумма над главной диагональю = " << upsum;
}
