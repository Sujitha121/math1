#include <iostream>
#include <iomanip>
using namespace std;
void drawTop(int side) {
	for (int i = 0; i < side; ++i) {
        cout << setw(side - i + 1) << "";
