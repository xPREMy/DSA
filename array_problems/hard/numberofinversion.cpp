class Solution {
public:
   void merge(vector<int> &nums,int low,int mid,int high,long long int &k){
    vector<int> v;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(nums[i]>nums[j]){
            k+=(mid-i+1);
            v.push_back(nums[j++]);
        }
        else v.push_back(nums[i++]);
    }
    while(i<=mid) v.push_back(nums[i++]);
    while(j<=high) v.push_back(nums[j++]);
    for(int b=low;b<=high;b++){
        nums[b]=v[b-low];
    }
   }
   void helper(vector<int> &nums,int low,int high,long long int &k){
    if(low>=high){
        return ;
    }
    int mid=low+(high-low)/2;
    helper(nums,low,mid,k);
    helper(nums,mid+1,high,k);
    merge(nums,low,mid,high,k);
   }
   long long int numberOfInversions(vector<int> nums) {
    long long int k=0;
    helper(nums,0,nums.size()-1,k);
    return k;
    }
};