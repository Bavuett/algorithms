#include <iostream>
using namespace std;

int binarySearch(int primes[], int target, int size) {
    int min = 0;
    int max = size - 1;

    while (min <= max) {
        int mid = (min + max) / 2;
        cout << "Minimo: " << min << " Massimo: " << max << " Media: " << mid << endl;

        if (primes[mid] == target) {
            cout << "Ho trovato " << target << " all'indice " << mid << "." << endl;
            return mid;
        } else if (primes[mid] < target) {
            min = mid + 1;
        } else {
            max = mid - 1;
        } 
    }

    return -1;
}

int main() {
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    int arraySize = sizeof(primes) / sizeof(primes[0]);
    int target;

    cout << "Questi sono i numeri primi inseriti nell'array: [ ";
    for (int i = 0; i < 16; i++) {
        cout << primes[i] << " ";
    }
    cout << "]" << endl;

    cout << "Inserisci un numero da cercare nell'array: ";
    cin >> target;

    int indexOfTarget = binarySearch(primes, target, arraySize);
    
    if (indexOfTarget == -1) {
        cout << "Il numero non è presente nell'array." << endl;
    } else {
        cout << "Il numero è presente nell'array alla posizione " << indexOfTarget << "." << endl;
    }

    return 0;
}