#include <iostream>
using namespace std;

int main()
{
	int n = 0, t = 0, sum = 0;
	cin >> n >> t;
	for(int i = 0; i < n; i++)
	{
		int x = 0;
		cin >> x;
		if(x == t)  // ���]�J���t�@�˪��ȫh�פ�j�� 
			break;
		else  // �_�h�����Nx�[�isum���� 
			sum += x;
	}
	cout << sum;
	return 0;
 } 
 
