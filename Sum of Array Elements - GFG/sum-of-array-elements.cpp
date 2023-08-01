//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete this function

int sumElement(int arr[],int n)
{
     int sum=0;
     int count =0;
    //Your code here
    vector<int> vt;
    
    if(n==0)return 0;
    
    for(int i =n;i>0;i--){
       sum = sum+ arr[count];
       count++;
       
    }
    
    
    
    return sum;
    
    //Your code here
}




//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<sumElement(arr,n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends