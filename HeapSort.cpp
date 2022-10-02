class Solution {
public:
    
    void heapify(int idx,vector<int>&v,int n){
        int left = 2*idx;
        int right = left + 1;
        
        int last = n;
        int max_idx = idx;
        
        if(left < last && v[idx] < v[left]){
            max_idx = left;
        }
        if(right < last && v[max_idx] < v[right]){
            max_idx = right;
        }
        
        if(max_idx != idx){
            swap(v[idx],v[max_idx]);
            heapify(max_idx,v,n);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        for(int i=(nums.size())/2;i>=0;i--){
            heapify(i,nums,nums.size());
        }
        
        int n = nums.size();
        int j = n;
        while(j>0){
            swap(nums[0],nums[j-1]);
            j--;
            heapify(0,nums,j);
        }
        return nums;
    }
};
