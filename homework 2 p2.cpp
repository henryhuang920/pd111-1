#include <iostream>
using namespace std;

int main()
{
	int n = 0, t = 0, tInch = 0, result1 = 0, result2 = 0, result3 = 0;  // �N��J�P��X�Ϊ��D�n�ܼƫŧi 
	cin >> n >> t;  // ��J�H�ơB�W�� 
	tInch = t * 12;  // �N�W���ন�^�T 
	for(int i = 0; i < n; i++)
	{
		int x = 0, type = 0;
		cin >> x >> type;  // ��J�C�ӤH���� 
		if(x >= tInch)
		{
			switch(type)  // �y����m����N�[���䵲�G 
			{
				case 1:
					result1++;
					break;
				case 2:
					result2++;
					break;
				case 3:
					result3++;
					break;
			}
		}
	}
	cout << result1 << ',' << result2 << ',' << result3;
	return 0;
 } 

