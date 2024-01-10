//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        stack<char> s ;
        string rev ;
        int i = 0 ;
        while(str[i] != '\0'){
            s.push(str[i]) ;
            i++ ;
        }
        
        while(!s.empty()){
            rev += s.top() ;
            s.pop() ;
            
        }
        return rev ;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends