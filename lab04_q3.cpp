// CIS150 Lab 04 - Question 3
// While loop smoothie shop simulation

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int supplies;

    srand(time(NULL));

    cout << "How many Smoothies can we make today: ";
    cin >> supplies;

    while (supplies > 1) {
        int orderSize = rand() % 9 + 2;

        if (supplies >= orderSize) {
            supplies = supplies - orderSize;
            cout << "\tOrder for  " << orderSize
                 << ".  We have supplies for " << supplies << " Smoothie(s)." << endl;
        } else {
            cout << "\tOrder for  " << orderSize
                 << ".  Sorry we can only make " << supplies << " Smoothies." << endl;
        }
    }

    cout << "Time to go and I get a Smoothie today!!!" << endl;

    return 0;
}
