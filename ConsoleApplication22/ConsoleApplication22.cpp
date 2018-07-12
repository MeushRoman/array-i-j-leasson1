// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;


int main()
{
	int a[3][4], b[3][4], c[3][4];

	srand(time(NULL));
	int max_v = INT_MIN;
	int sum = 0;

	//for (int i = 0; i < 3; i++)
	//{	
	//	sum = 0;
	//	for (int j = 0; j < 4; j++)
	//	{
	//		a[i][j] = rand() % 21;
	//		//if (a[i][j] > max_v) max_v = a[i][j];
	//		sum += a[i][j];
	//		cout << right << setw(10) <<  a[i][j];
	//	}
	//	cout << "\t " << sum ;
	//	if (sum > max_v) max_v = sum;
	//	
	//	cout << endl;
	//}
	//cout << "max =" << max_v << endl;

	int n;

	do
	{
		int array[3][4] = { {1,2},{3,4,5}, 6,7 };
		int i,j;
		cout << "n = ";
		cin >> n;
		int z;

		if (n == 31) {

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					a[i][j] = rand() % 21;
					cout << right << setw(10) << a[i][j];
				}
				cout << endl;
			}
			cout << endl;

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					b[i][j] = rand() % 21;
					cout << right << setw(10) << b[i][j];
				}
				cout << endl;
			}
			cout << endl;

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					c[i][j] = a[i][j] + b[i][j];
					cout << right << setw(10) << c[i][j];
				}
				cout << endl;
			}
			cout << endl;
		}
		else if (n == 32) {

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					a[i][j] = -35 + rand() % 100;
					cout << right << setw(10) << a[i][j];
				}
				cout << endl;
			}
			cout << endl;

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					b[i][j] = -35 + rand() % 100;
					cout << right << setw(10) << b[i][j];
				}
				cout << endl;
			}
			cout << endl;

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					c[i][j] = a[i][j] * b[i][j];
					cout << right << setw(10) << c[i][j];
				}
				cout << endl;
			}
			cout << endl;
		}
		else if (n == 33) {
			int ar[5][10], br[5][5];

			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					ar[i][j] = rand() % 50;
					cout << right << setw(10) << ar[i][j];
				}
				cout << endl;
			}
			cout << endl;

			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					br[i][j] = ar[i][j * 2] + ar[i][j * 2 + 1];

					cout << right << setw(10) << br[i][j];
				}
				cout << endl;
			}
		}
		else if (n == 30) {
		
			for (int i = 0; i < 4; i++)
			{
				sum = 0;

				for (int j = 0; j < 3; j++)
				{
					//a[i][j] = rand() % 21;
					//cout << right << setw(10) << array[i][j];
					sum += a[j][i];

				}
				cout << "\t " << sum;
				cout << endl;
			}

			

		}
		else if (n == 25) {
			int ar[7];

			for (int i = 0; i < 7; i++)
			{
				ar[i] = rand() % 10;
				cout << left << setw(5) << a3[i];
			}
			cout << endl;

			int k;
			cout << "k = ";
			cin >> k;

			for (int i = 0; i < 5; i++)
			{
			
			}
	


		}
	} while (true);

	return 0;
}

