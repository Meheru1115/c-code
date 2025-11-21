#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 8, 1, 3};
    int n = 5;

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout << "Bubble Sorted Array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}
