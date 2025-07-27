#include <iostream>
#include <iomanip>
using namespace std;
void drawTop(int side) {
	for (int i = 0; i < side; ++i) {
        cout << setw(side - i + 1) << "";
	cout << "/";
        cout << setw(side * 2 + i * 2) << "";
	 cout << "\\" << endl;
    }
