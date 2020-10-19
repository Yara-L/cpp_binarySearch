#include <iostream>
using namespace std;

int dih(int arr[], int left, int right, int toFind);

int main() {
    const int n = 11;
    int arr[n]{ 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 20 };
    int toFind = 15;

    cout << "INDEX OF " << toFind << " IS " << dih(arr, 0, n - 1, toFind) << endl;

    return 0;
}

int dih(int arr[], int left, int right, int toFind) {
    if (right >= left) {
        int mid = (left + right) / 2;
        if (arr[mid] == toFind)
            return mid;
        if (arr[mid] > toFind)
            return dih(arr, left, mid - 1, toFind);
        else
            return dih(arr, mid + 1, right, toFind);
    }

}