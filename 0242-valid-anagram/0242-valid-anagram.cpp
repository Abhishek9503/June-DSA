class Solution {
public:
    bool isAnagram(string s, string t) {
   int freqtable[256]={0};
   for(int i=0; i<s.length(); i++){
       freqtable[s[i]]++;
   }
   for(int j=0; j<t.length(); j++){
       freqtable[t[j]]--;
   }
   for(int i=0; i<256; i++){
       if(freqtable[i]!=0){
           return false;
       }
   }
   return true;
    }
};