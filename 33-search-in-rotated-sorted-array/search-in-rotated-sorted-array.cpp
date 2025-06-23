class Solution {
public:
int getPivot(vector<int>& arr, int n) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;

    while(start<end) {
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end-start)/2;

    }
    return start;

}
int binarySearch(vector<int>& nums, int start, int end, int key) {
    int mid;

    while(start<=end) {
        mid = start + (end-start)/2;

        if(nums[mid] == key) {
            return mid;
        }
        // if key is greater than arr[mid] then go right
        if(key > nums[mid]) {
            start = mid+1;
        }
        else { // key < arr[mid]
            end = mid - 1;
        }
        mid = start + (end-start)/2;
       
    }
    return -1;
}

    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int pivot = getPivot(nums, n);

        if(target >= nums[pivot] && target <= nums[n-1]) {
            return binarySearch(nums, pivot, n - 1, target);

        }
        else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
        
    }
};