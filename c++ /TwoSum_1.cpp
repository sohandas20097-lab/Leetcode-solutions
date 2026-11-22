class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int cs=0;
        for(int st=0;st<nums.size();st++){
            for(int ed=st+1;ed<nums.size();ed++){
                cs=nums[st]+nums[ed];
                if(cs== target){
                    ans={st,ed};
                    return ans;
                }
                else{
                    cs=0;
                    continue;
                }
            

        }
        }return ans;
        }};
        
