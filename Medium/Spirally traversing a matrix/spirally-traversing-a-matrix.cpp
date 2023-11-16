//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector <int > ans;

        int rowstart = 0;
        int colstart = 0;
        int rowend = r-1;
        int colend = c-1;

        int total = r*c;
        int count = 0;

        while(count < total){
            for(int i=colstart;count< total && i<=colend; i++){
                ans.push_back(matrix[rowstart][i]);
                count++;
            }
            rowstart++;

            for(int i=rowstart; count< total && i<=rowend; i++){
                ans.push_back(matrix[i][colend]);
                count++;
            }
            colend--;

            // if (rowstart <= rowend) {  or 
            for(int i=colend; count< total && i>=colstart; i--){
                ans.push_back(matrix[rowend][i]);
                count++;
            }
            rowend--;
            

            // if (colstart <= colend){  or we can check count <= total
            for(int i= rowend; count< total && i>=rowstart; i--){
                ans.push_back(matrix[i][colstart]);
                count++;
            }
            colstart++;
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends