#include <iostream>
using namespace std;

int main()
{
	int gender = 0, age = 0, result = -1;  // �N��J�P��X�Ϊ��D�n�ܼƫŧi 
	cin >> gender >> age;
	switch(gender)
	{
		case 0:
			(age >= 16)?(result = 1):(result = 0);  // �Hresult�N��X�k�_���� 
			break;
		case 1:
			(age >= 18)?(result = 1):(result = 0);
			break;
	}
	if(result == 1)
		cout << "Yes";  // �H���޸���X�r���קK���~ 
	else if (result == 0)
		cout << "No";
	return 0;
 } 
