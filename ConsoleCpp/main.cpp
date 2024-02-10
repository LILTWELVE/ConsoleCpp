#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "RU");

	short num;
	cout << "Введите номер пальца от 1 до 5 : ";
	cin >> num;

	if (num==1){
		cout << "1 - Большой палец";
	}
	else if (num==2) {
		cout << "2 - Указательный палец";
	}
	else if (num==3) {
		cout << "3 - Средний палец";
	}
	else if (num==4) {
		cout << "4 - Безымянный палец";
	}
	else if (num == 5) {
		cout << "5 - Мизинец";
	}

	else {
		cout << "Ошибка";
	}

	return 0;
}