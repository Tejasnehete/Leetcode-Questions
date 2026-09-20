class Solution {
public:
    int reverseDegree(string s) {
        int n=s.length();
        int ans=0;

        for(int i=1;i<=s.size();i++){
            ans+=(26-(s[i-1]-'a'))*i;
        }

        return ans;
    }
};