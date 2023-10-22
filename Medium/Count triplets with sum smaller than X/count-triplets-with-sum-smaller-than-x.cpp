//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    int i,j,k;
	    i=0;j=1;
	    k=n-1;
	   // for(i=0;i<n;i++) cout<<arr[i]<<" ";
	    long long int ans=0,s;
	    while(i<n-1){
	        
	        s=arr[i]+arr[j]+arr[k];
	        while(s>=sum&&k>j)
	        {k--;
	        s=arr[i]+arr[j]+arr[k]; 
	        }
	        
	       if(s<sum) {ans=ans+k-j; j++;}
	       else {i++;j=i+1;k=n-1;}
	       
	      
	        
	        
	        
	    }
	    return ans;
	    
	}
		 

};

//{ Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends