#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "RU");

	short num;
	cout << "������� ����� ������ �� 1 �� 5 : ";
	cin >> num;

	if (num==1){
		cout << "1 - ������� �����";
	}
	else if (num==2) {
		cout << "2 - ������������ �����";
	}
	else if (num==3) {
		cout << "3 - ������� �����";
	}
	else if (num==4) {
		cout << "4 - ���������� �����";
	}
	else if (num == 5) {
		cout << "5 - �������";
	}

	else {
		cout << "������";
	}

	return 0;
}