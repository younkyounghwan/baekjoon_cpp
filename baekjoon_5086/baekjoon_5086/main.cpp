/*
�ΰ��� ������ �Է¹ް� ù���� ���ڰ� �ι��� ������ �������, �������, �ƴϸ�, �Ѵ� �ƴ���
����ϴ� �˰���
*/

#include <iostream>

using namespace std;

int main()
{
	int num1, num2; 
	while(1){
		
		cin >> num1 >> num2; // �ΰ��� ���� �Է�
		
		if (num1 == 0 && num2 == 0) // 0 0�� �ԷµǸ� ���α׷� ����
			return 0; 
		
		if (num1 < num2) {
			if (num2 % num1 == 0)
				cout << "factor" << endl; // ���
			else
				cout << "neither" << endl; // �Ѵ� �ƴ�
		}
		else {
			if (num1 % num2 == 0)
				cout << "multiple" << endl; //���
			else
				cout << "neither" << endl; // �Ѵ� �ƴ�
		}
	}
	return 0;
}