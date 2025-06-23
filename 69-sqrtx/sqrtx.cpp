class Solution {
public:
int binarySearch(int n) {
    int start = 0;
    int end = n;
    int ans = -1;

    while(start<=end) {
        int mid = start + (end - start)/2;
        long long square = 1LL * mid * mid;
        
        if(square == n) {
           return mid;
        }
        if(square < n) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
         
        }
    
    }
    return ans;
}

    int mySqrt(int x) {
        return binarySearch(x);
        
    }
};