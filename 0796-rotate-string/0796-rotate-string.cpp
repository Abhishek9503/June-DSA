class Solution {
public:
    bool rotateString(string s, string goal) {
      queue<char> q1;
      queue<char> q2;
      for(int i=0; i<s.size(); i++){
          q1.push(s[i]);
      }
      for(int j=0; j<goal.size(); j++){
          q2.push(goal[j]);
      }
      if(q1==q2){
          return true;
      }
      int k=goal.size()-1;
      while(k!=0){
          char ch=q2.front();
          q2.pop();
          q2.push(ch);
          if(q1==q2){
              return true;
          }
          k--;
      }
      return false;
    }
};