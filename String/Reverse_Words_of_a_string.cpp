//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string rev ;
        stack<string> s ;
        queue<char>q ;
        int i = 0 ;
        
        while(S[i] != '\0'){
            string one ;
            while(S[i] != '.' && S[i] != '\0'){
                q.push(S[i]) ;
                i++ ;
            }
            while(!q.empty()){
                one += q.front() ;
                q.pop() ;
            }
            s.push(one) ;
            if(S[i] == '.'){
                s.push(".") ;
                i++ ;
            }
            
            //i++ ;
        }
        
        while(!s.empty()){
            rev += s.top() ;
            s.pop() ;
        }
        
       return rev ;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends