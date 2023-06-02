//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
      vector<int> ans;
    void precompute(){
        vector<bool> isprime(1000001,true);
        isprime[0]=false;
        isprime[1]=false;
        for(int i=2;i<=1000000;i++){
            if(isprime[i]){
                ans.push_back(i);
                for(int j=2*i;j<=1000000;j+=i){
                    isprime[j]=false;
                }
            }
        }
    }
    void dfs(int node,vector<bool> &vis,vector<vector<int>> &g,int &temp){
        vis[node]=true;
        for(auto x:g[node]){
            if(vis[x]==false){
                dfs(x,vis,g,temp);
            }
        }
        temp++;
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // Code here
        vector<bool> vis(n+1,false);
        int s=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==false){
                int temp=0;
                dfs(i,vis,g,temp);
                s=max(temp,s);
            }
        }
        if(s==1)return -1;
        return ans[s-1];
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends