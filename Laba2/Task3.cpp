#include <iostream>
#include <conio.h>
#include "Header.h"
using namespace std;

int main() {
	cout << "Enter number of task (1 or 2):\n";
	double x;;
	switch (_getch()) {
	case '1':
		double y;
		cout << "Task 1\nEnter coordinates.\nx = ";
		cin >> x;
		cout << "y = ";
		cin >> y;
		cout << (isInArea(x, y) ? "In area" : "Not in area");
		break;
	case '2':
		cout << "Task 2\nEnter x.\nx = ";
		cin >> x;
		cout << "f(x) = " << f(x);
		break;
	default:
		cout << "Wrong!";
		break;
	}
	return 0;
}