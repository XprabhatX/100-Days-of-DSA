#include <iostream>
#include <vector>

using namespace std;

void swap (int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void reverse (vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-i-1; i++) {
        swap(arr[i], arr[n-i-1]);
    }
}

int main () {
    vector<int> arr = {0,1,2,3,4,5,6,7};
    int size = arr.size();

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    reverse(arr);
    cout<<endl;

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    return 0;
}