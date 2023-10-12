#include <iostream>
#include <vector>

using namespace std;

void reverse (int arr[], int s, int e) {
    
    while(s < e) {
        int temp  = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }

}

void rotateArr(int arr[], int d, int n){
    d=n%d + 1;
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

int main () {
    int n = 5, d = 2;
    int arr[] = {1,2,3,4,5};

    rotateArr(arr, d, n);

    for (int i : arr)
        cout << i << " ";
    
    return 0;
}