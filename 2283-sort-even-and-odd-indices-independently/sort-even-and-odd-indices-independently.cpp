class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size();
        vector<int> odd,even;

        for(int i=0;i<nums.size();i++){
            if(i & 1){
                odd.push_back(nums[i]);
            }else{
                even.push_back(nums[i]);
            }
        }

        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());

        int e=0,o=0;

        for(int i=0;i<n;i++){
            if(i & 1){
                nums[i]=odd[o];
                o++;
            }else{
                nums[i]=even[e];
                e++;
            }
        }

        return nums;
    }
};