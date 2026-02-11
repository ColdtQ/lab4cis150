// CIS150 Lab 04 - Question 1
// Branches with cascading if / else-if / else

#include <iostream>
using namespace std;

int main() {
    int numSmoothies;

    cout << "Please enter the number of Smoothies in the order: ";
    cin >> numSmoothies;

    if (numSmoothies > 25) {
        cout << "Wow an order from the Big House – Go Blue!" << endl;
    } else if (numSmoothies > 15 && numSmoothies <= 25) {
        cout << "Smoothies for everyone in the class." << endl;
    } else if (numSmoothies > 5 && numSmoothies <= 15) {
        cout << "Smoothies for the whole team." << endl;
    } else if (numSmoothies > 1 && numSmoothies <= 5) {
        cout << "The whole family will enjoy these." << endl;
    } else if (numSmoothies == 1) {
        cout << "Enjoy your Smoothie and come back soon" << endl;
    } else if (numSmoothies == 0) {
        cout << "No Smoothie today? You must not be feeling well" << endl;
    } else {
        cout << "Sorry, I didn’t understand.  Would you please repeat that." << endl;
    }

    return 0;
}
