class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int break_index,i,j;
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break_index=i;
                break;
            }
        }
        if(i<0)
            reverse(nums.begin(),nums.end());
        else{
        for( j=nums.size()-1;j>break_index;j--){
            if(nums[break_index]<nums[j]){  
                swap(nums[break_index],nums[j]);
                break;
            }
        }
        
        reverse(nums.begin()+break_index+1,nums.end());
        }
    }
};
