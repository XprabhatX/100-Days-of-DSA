#include <iostream>

using namespace std;

int countPair(int arr[], int n, int sum) {

    int i=0,j=n-1,k=0,ans=0;
    while(i<j){
        k = arr[i]+arr[j];
        if (k==sum){
            ans++;
            i++;
            j--;
        } else if (k > sum)
            j--;
        else
            i++;
    }

    if(ans == 0) return -1;

    return ans;

}

int main() {

    int arr[] = {1,2,3,4,5,6,7};
    int sum = 4;

    cout << countPair(arr, 7, sum);

    
    return 0;
}