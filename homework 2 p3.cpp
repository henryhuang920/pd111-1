#include <iostream>
using namespace std;

int main()
{
	int n = 0, t = 0, tInch = 0, result1 = 0, result2 = 0, result3 = 0;  
	int max1 = 0, max2 = 0, max3 = 0;  // �N��J�P��X�Ϊ��D�n�ܼƫŧi 
	cin >> n >> t;  // ��J�H�ơB�W�� 
	for(int i = 1; i <= n; i++)
	{
		int x = 0, type = 0;
		cin >> x >> type;  // ��J�C�ӤH���� 
		switch(type)  // �y����m����N�[���䵲�G 
		{
			case 1:
				if(x > max1)
				{
					max1 = x;  // �Y�y�������W�L���e�Ҧ��P���O�y�������h��g�̰���
					result1 = i;  // �O�����y���s�� 
				}
				break;
			case 2:
				if(x > max2)
				{
					max2 = x;
					result2 = i;
				}
				break;
			case 3:
				if(x > max3)
				{
					max3 = x;
					result3 = i;
				}
				break;
		}
	}
	cout << result1 << ',' << result2 << ',' << result3;
	return 0;
 } 

