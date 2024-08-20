// NAME - SHREY RAJ
// PRN - 23070123123
// EXPERIMENT - 6(E) 

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            cout << "* ";
            ++j;
        } while (j <= 6);
        cout << endl;
        ++i;
    } while (i <= 6);

    return 0;
}