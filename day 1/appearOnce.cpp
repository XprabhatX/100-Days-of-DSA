#include<iostream>
#include<vector>

using namespace std;

int search (vector<int> A, int n)  {
    int flag = 1;
    for(int i=1; i<n; i++){
        if (A[i] == A[i-1] && flag == 1)
            flag = 0;
        else if (A[i] != A[i-1] && flag == 0)
            flag = 1;
        else if (A[i] != A[i-1] && flag == 1)
            return A[i-1];
    }
    return -1;
}

int main () {
    vector<int> arr = {1,1,2,2,3,4,4};

    cout << search(arr, arr.size());
    
    return 0;
}