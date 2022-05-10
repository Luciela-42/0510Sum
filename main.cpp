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

void PAlign(int* Num2, int Cnt2)
{
	for (int i = 0; i < Cnt2; i++)
	{
		for (int j = 0; j < Cnt2 - 1; j++)
		{
			if (Num2[j] > Num2[j + 1])
			{
				int Temp = Num2[j];
				Num2[j] = Num2[j + 1];
				Num2[j + 1] = Temp;
			}
		}
	}
}

int main()
{
	int Count = 0;


	cout << "횟수 입력 : ";
	cin >> Count;

	if (Count > 10) //10회를 넘어서면 종료
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

	PAlign(PtArr, Count);

	for (int j = 0; j < Count; j++)
	{
		cout << PtArr[j] << " ";
	}

	delete[] PtArr;

	return 0;
}