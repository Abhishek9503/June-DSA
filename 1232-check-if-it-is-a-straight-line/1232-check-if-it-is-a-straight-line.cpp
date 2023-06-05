class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int n= coordinates.size();
        int dy= coordinates[1][1]- coordinates[0][1];
        int dx= coordinates[1][0]- coordinates[0][0];
        
        
        for(int i=2 ; i<n;i++)
        {
            int dy_i=coordinates[i][1]- coordinates[0][1];
             int dx_i=coordinates[i][0]- coordinates[0][0];
                                                       
          if(dy_i*dx != dy*dx_i)
           {
               return false;
            }

            
        }
        return true;
    }  
};