//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        if(a.length() != b.length()){
            return false ;
        }
        for(int i = 0 ; i < a.length() ; i++){
            for(int j = 0 ; j < b.length() ; j++){
               
                if(a[i] == b[j]){
                    b.erase(b.begin() + j) ;
                    break ;
                }
            
            }
            
        }
       if(b == ""){
            return true ;
        }
        else 
            return false ;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends