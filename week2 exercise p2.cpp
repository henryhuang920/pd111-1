#include <iostream>
using namespace std;

int main()
{
	int n = 0, max = -100, sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x = 0;
		cin >> x;
		sum += x;  // �`�M�����[�Jx 
		(x > max)?(max = x): (max = max);  // �Yx��ثe�̤j�Ȥj�h�N�̤j�ȧ�g��x 
	}
	cout << max << "," << sum;
	return 0;
 } 

