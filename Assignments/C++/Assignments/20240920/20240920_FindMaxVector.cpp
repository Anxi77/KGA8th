/*
����2. ���͸� �̿��� ū��ã��
*/

#include <iostream>
#include <vector>

using namespace std;

int FindMaxValue(const vector<int>& vec)
{
	int Max = *vec.begin();

	for (auto it = vec.begin(); it < vec.end(); ++it)
	{
		if (Max < *it)
		{
			Max = *it;
		}
	}

	return Max;
}

int main()
{
	vector<int> a = { 11,15,10,767,12 }; 
	cout << FindMaxValue(a) << endl;
}