// CIS150 Lab 04 - Question 2
// Nested loops rectangle drawing

#include <iostream>
using namespace std;

int main() {
    int height;
    int width;

    cout << "Enter height of the rectangle: ";
    cin >> height;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    cout << "Here is a " << height << " by " << width << " rectangle:" << endl;

    // Top row
    for (int topRowIndex = 0; topRowIndex < 1; topRowIndex++) {
        for (int topCharIndex = 0; topCharIndex < 1; topCharIndex++) {
            cout << '+';
        }
        for (int topDashIndex = 0; topDashIndex < width - 2; topDashIndex++) {
            cout << '-';
        }
        for (int topRightCornerIndex = 0; topRightCornerIndex < 1; topRightCornerIndex++) {
            cout << '+';
        }
        cout << endl;
    }

    // Middle rows
    for (int middleRowIndex = 0; middleRowIndex < height - 2; middleRowIndex++) {
        for (int leftWallIndex = 0; leftWallIndex < 1; leftWallIndex++) {
            cout << '|';
        }
        for (int innerSpaceIndex = 0; innerSpaceIndex < width - 2; innerSpaceIndex++) {
            cout << ' ';
        }
        for (int rightWallIndex = 0; rightWallIndex < 1; rightWallIndex++) {
            cout << '|';
        }
        cout << endl;
    }

    // Bottom row
    for (int bottomRowIndex = 0; bottomRowIndex < 1; bottomRowIndex++) {
        for (int bottomLeftCornerIndex = 0; bottomLeftCornerIndex < 1; bottomLeftCornerIndex++) {
            cout << '+';
        }
        for (int bottomDashIndex = 0; bottomDashIndex < width - 2; bottomDashIndex++) {
            cout << '-';
        }
        for (int bottomRightCornerIndex = 0; bottomRightCornerIndex < 1; bottomRightCornerIndex++) {
            cout << '+';
        }
        cout << endl;
    }

    return 0;
}
