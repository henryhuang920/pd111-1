#include <iostream>
using namespace std;

int main()
{
	int n = 0, t = 0, tInch = 0, result = 0;  // �N��J�P��X�Ϊ��D�n�ܼƫŧi 
	cin >> n >> t;  // ��J�H�ơB�W�� 
	tInch = t * 12;  // �N�W���ন�^�T 
	for(int i = 0; i < n; i++)
	{
		int x = 0;
		cin >> x;  // ��J�C�ӤH���� 
		if(x >= tInch)
		{
			result++;  // �Y�����j��W���h���p�ƥ[�@ 
		}
	}
	cout << result;
	return 0;
 } 

