// LEET CODE VERSION
// MountainArray Class is defined in leetcode
// https://leetcode.com/problems/find-in-mountain-array/?envType=daily-question&envId=2023-10-12

int peak(MountainArray& arr, int s, int e) {
    int mid = s+(e-s)/2;
    if(s >= e) return s;

    if (arr.get(mid) < arr.get(mid+1))
        return peak(arr, mid+1, e);
    else
        return peak(arr, s, mid);

}

int bs(MountainArray& arr, int s, int e, int t) {
    int mid = s+(e-s)/2;

    if (arr.get(mid) == t) return mid;
    if (s >= e) return -1;

    if (arr.get(mid) < t)
        return bs(arr, mid+1, e, t);
    else if (arr.get(mid) > t)
        return bs(arr, s, mid-1, t);

    return -1;
}

int bsr(MountainArray& arr, int s, int e, int t) {
    int mid = s+(e-s)/2;

    if (arr.get(mid) == t) return mid;
    if (s >= e) return -1;

    if (arr.get(mid) > t)
        return bsr(arr, mid+1, e, t);
    else if (arr.get(mid) < t)
        return bsr(arr, s, mid-1, t);

    return -1;
}

int findInMountainArray(int target, MountainArray &mountainArr) {
    
    int p = peak(mountainArr, 0, mountainArr.length()-1);

    int left = bs(mountainArr, 0, p, target);
    if (left != -1) return left;

    return bsr(mountainArr, p+1, mountainArr.length()-1, target);
}