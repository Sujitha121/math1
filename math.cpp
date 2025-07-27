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
void drawMiddle(int side) {
	cout << "/";
    for (int i = 0; i < side * 4; ++i) cout << "-:";
    cout << "\\" << endl;
}
void drawBottom(int side) {
    for (int i = side - 1; i >= 0; --i) {
	    cout << setw(side - i + 1) << "";
        cout << "\\";
	cout << setw(side * 2 + i * 2) << "";
        cout << "/" << endl;
	 }
}
int main() {
    int side;
    cout << "ASCII Hexagon Drawer (C++)\n";
    cout << "--------------------------\n";
    cout << "Enter the length of one side (3–10 recommended): ";
    cin >> side;
    if (side < 2 || side > 20) {
        cout << "Please enter a valid number between 2 and 20.\n";
        return 1;
	e < 2 || side > 20) {
        cout
		drawTop(side);
    drawMiddle(side);
    drawBottom(side);
