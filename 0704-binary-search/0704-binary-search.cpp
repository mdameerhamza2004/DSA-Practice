class Solution {
public:
    int binSearch(vector<int>& arr,int target,int str,int end){
        if(str>end){
            return -1;
        }
       int mid = str+(end-str)/2;
       if(arr[mid]==target){
       return mid;
       }
       if(arr[mid]>target){
            return binSearch(arr,target,str,mid-1);
       }
    //    else if(arr[mid]<target){
        return binSearch(arr,target,mid+1,end);
    }
    int search(vector<int>& nums, int target) {
        return binSearch(nums,target,0,nums.size()-1);
    }
};