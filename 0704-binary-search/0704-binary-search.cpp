class Solution {
public:
int binarySearch(vector<int>& arr, int s, int e, int k) {
    //base case
    //element not found
    if(s>e){
        return -1;
    }
    int mid = s + (e - s) / 2;
    //element found 
    if(arr[mid] == k) {
        return mid;
    }
    if(arr[mid] < k) {  //search in right part
        return binarySearch(arr, mid+1, e, k);
    }
    else {
        return binarySearch(arr, s, mid-1, k);
    }
}
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1, target);
        
    }
};