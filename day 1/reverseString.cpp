#include <iostream>
#include <vector>

using namespace std;

void swap (char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void reverse (string& arr, int n) {
    for (int i = 0; i < n-i-1; i++) {
        swap(arr[i], arr[n-i-1]);
    }
}

int main () {
    string str = "hello world!";
    int size = str.size();

    cout << str << endl;
    reverse(str, size);
    cout<<str;
    
    return 0;
}