class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int tail=0,head=0,ans=0;

        for(head=0;head<s.size();head++)
        {
            while(mp[s[head]]>0)
            {
                ans=max(ans,head-tail);
                mp[s[tail]]--;
                tail++;
            }
            mp[s[head]]++;
        }
        return max(ans,head-tail);
    }
  
};