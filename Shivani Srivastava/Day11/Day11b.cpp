class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0, count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
                if(count>max){
                    max=count;
                }
            }
            else{
                count=0;
            }
        }
        return max;
    }
};