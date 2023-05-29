#include <iostream>
#include <conio.h>
#include <functional>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
using namespace System;
int main() {
	vector <int> num{ 1, 34, 20, 45, 66 };
	list <char> letra{ 'a', 'h', 'k', 'j', 't' };
	cout << "\n\tDisplay element in a lis using lamda" << endl; cout << "\t";
	for_each(num.cbegin(), num.cend(), [](const int& element) {cout << element << "  "; }); cout << endl << endl;
	cout << "\tDisplay element in a lis using lamda" << endl; cout << "\t";
	for_each(letra.cbegin(), letra.cend(), [](auto& element) {cout << element << "  "; });
	_getch(); return 0;
}