//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
     
        
        int first = INT_MIN;
        int second = INT_MIN;
        for(int num : arr){
            if(num> first ){
                second = first;
                first = num;
            }
            else if (  num !=  first && num<first && num > second  ){
                second = num;
            }
        }
        
        if(second == INT_MIN){
            return -1;
            
        }
        else {
            return second;
        }
       
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends