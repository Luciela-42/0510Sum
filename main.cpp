#include <iostream>

using namespace std;

int PSum(int* Num, int Cnt)
{
	int TotalSum = 0;

	for (int i = 0; i < Cnt; i++)
	{
		TotalSum += Num[i];
	}

	return TotalSum;
}

int main()
{
	int Count = 10;


	cout << "횟수 입력 : ";
	cin >> Count;

	if (Count > 10)
	{
		return 0;
	}

	int* PtArr = new int[Count];

	for (int i = 0; i < Count; i++)
	{
		cout << "정수 입력 : ";
		cin >> PtArr[i];
	}

	cout << PSum(PtArr, Count) << endl;

	delete[] PtArr;

	return 0;
}