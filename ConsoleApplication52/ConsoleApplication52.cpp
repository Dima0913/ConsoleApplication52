//#include <iostream>
//using namespace std;
//int main() {
//    int n, value;
//    cout << "Enter the dimension of the array: ";
//    cin >> n;
//    cout << "Enter the initial value: ";
//    cin >> value;
//
//    int** array = new int* [n];
//    for (int i = 0; i < n; ++i) {
//        array[i] = new int[n];
//    }
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            array[i][j] = value;
//            value *= 2;
//        }
//    }
//
//    cout << "The resulting array:" << endl;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < n; ++i) {
//        delete[] array[i];
//    }
//    delete[] array;
//}

#include <iostream>
using namespace std;
int main() {
    int n, value;
    cout << "Enter the dimension of the array: ";
    cin >> n;
    cout << "Enter the initial value: ";
    cin >> value;

    int** array = new int* [n];
    for (int i = 0; i < n; ++i) {
        array[i] = new int[n];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = value;
            value += 1;
        }
    }

    cout << "The resulting array:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i) {
        delete[] array[i];
    }
    delete[] array;

}