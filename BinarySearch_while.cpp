//#include <iostream>
//using namespace std;
//
//int dih(int arr[], int left, int right, int toFind);
//
//int main() {
//    const int n = 11;
//    int arr[n]{ 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 20 };
//    int toFind = 15;
//
//    cout << dih(arr, 0, n - 1, toFind) << endl;
//    
//
//    return 0;
//}
//
//int dih(int arr[], int left, int right, int toFind) {
//
//        while (right >= left){
//        int mid = (left + right) / 2;
//            if (arr[mid] == toFind){
//                cout << "The location of your number is " << mid << endl;
//                return arr[mid];
//            break;
//            }
//            else if (arr[mid] > toFind){
//            right = mid - 1;
//            }
//            else{
//            left = mid + 1;
//        }
//    }
//}