#include <iostream>

using namespace std;

void rotateArr(int arr[], int d, int n){
    int temp[n];
    int p = 0;
    for ( int i = d; i < n; i++, p++)
        temp[p] = arr[i];
    for ( int i = 0; i < d; i++, p++)
        temp[p] = arr[i];
    
    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
        
}

int main () {
    int n = 5, d = 2;
    int arr[n] = {1,2,3,4,5};

    rotateArr(arr, d, n);
    
    return 0;
}