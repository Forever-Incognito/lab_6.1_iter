//lab_6.1_iter

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* b, const int size, const int Low, const int High) 
{
	for (int i = 0; i < size; i++)
		b[i] = Low + rand() % (High - Low + 1);
}

void Print(int* b, const int size) 
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << b[i];
	cout << endl;
}

int Count(int* b, const int size) 
{
	int count = 0;
	for (int i = 0; i < size; i++) 
	{
		if (b[i] % 2 == 0 && !(b[i] > 0)) 
		{
			count++;
		}
	}
	return count;

}

void Zero(int* b, const int size) 
{
	for (int i = 0; i < size; i++)
		if (b[i] % 2 == 0 && !(b[i] > 0))
			b[i] = 0;
}

int Sum(int* b, const int size) 
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (b[i] % 2 == 0 && !(b[i] > 0))
			S += b[i];
	return S;
}

int main() 
{
	srand((unsigned)time(NULL));
	const int n = 24;
	int b[n];

	int Low = -15;
	int High = 75;

	Create(b, n, Low, High);
	Print(b, n);
	cout << "Sum = " << Sum(b, n) << endl;
	cout << "Count = " << Count(b, n) << endl;
	Zero(b, n);
	Print(b, n);

	return 0;
}