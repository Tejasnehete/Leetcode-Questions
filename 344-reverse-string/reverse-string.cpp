class Solution {
public:
    void reverseString(vector<char>& s) {
        int b=0;
        int n=s.size();
        int e=n-1;

        while(b<e){
            swap(s[b++],s[e--]);
        }
    }
};