// median of two sorted arrays
// https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();

        if (n1 == 0){
            if (n2==0) return 0;

            if (n2%2 == 0)
                return (double)(nums2[n2/2 - 1] + nums2[n2/2])/2;
            else return (double)nums2[n2/2];
        }
        if (n2 == 0){

            if (n1%2 == 0)
                return (double)(nums1[n1/2 - 1] + nums1[n1/2])/2;
            else return (double)nums1[n1/2];
        }

        int i = 0 , j = 0;
        int n = ((n1 + n2)/2);
        
        bool even = false;

        if (n%2 == 0) {
            n = n-1;
            even = true;
        }
        
        while(n > 0) {
            if (nums1[i] < nums2[j]) {
                i++; n--;
            }
            else {
                j++; n--;
            }
        }
        // [1 3] [2 4]
        if (even)
            return (double)(nums1[i]+nums2[j])/2;

        if (nums1[i] < nums2[j]) return nums1[i];
        else return (double)nums2[j];
    }
};