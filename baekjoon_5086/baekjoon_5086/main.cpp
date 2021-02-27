/*
두개의 정수를 입력받고 첫번쨰 숫자가 두번쨰 숫자의 약수인지, 배수인지, 아니면, 둘다 아닌지
출력하는 알고리즘
*/

#include <iostream>

using namespace std;

int main()
{
	int num1, num2; 
	while(1){
		
		cin >> num1 >> num2; // 두개의 정수 입력
		
		if (num1 == 0 && num2 == 0) // 0 0이 입력되면 프로그램 종료
			return 0; 
		
		if (num1 < num2) {
			if (num2 % num1 == 0)
				cout << "factor" << endl; // 약수
			else
				cout << "neither" << endl; // 둘다 아님
		}
		else {
			if (num1 % num2 == 0)
				cout << "multiple" << endl; //배수
			else
				cout << "neither" << endl; // 둘다 아님
		}
	}
	return 0;
}