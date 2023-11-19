//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        unordered_map<long long int, int> mp;

    `int cnt = 0;
    long long int presum = 0;

    for (int i = 0; i < n; i++) {
        presum += arr[i];
        
        // Check if the current presum is 0
        if (presum == 0) {
            cnt++;
        }

        // If the presum is already encountered, add its count to the total count
        cnt += mp[presum];

        // Increment the count of the current presum in the map
        mp[presum]++;
    }

    return cnt;
}
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends