//#include <iostream>
//#include <random>
//
//using namespace std;
//
//void printArr(int arr[], int size) {
//    cout << "List: ";
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int findEvens(int arr[], int size) {
//    int evens = 0;
//    for (int i = 0; i < size; i++) {
//        if (arr[i] % 2 == 0) {
//            evens++;
//        }
//    }
//    return evens;
//}
//
//
//int main() {
//
//    int size;
//    int seed;
//    cout << "Please enter a size: ";
//    cin >> size;
//    cout << "Please enter a random seed: ";
//    cin >> seed;
//
//    srand(seed);
//    int arr[size];
//
//    for(int i = 0; i < size; i++) {
//        arr[i] = (rand() % 91) + 10;
//    }
//    printArr(arr,size);
//    cout << "Number of Even Values in the list: " << findEvens(arr,size) << endl;
//
//    return 0;
//}