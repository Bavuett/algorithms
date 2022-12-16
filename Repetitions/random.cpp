#include <iostream>
using namespace std;

int main() {
    srand(time(NULL));

    cout << rand() % 10 << endl;
}