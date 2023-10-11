//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    string S3="";
    int n=S1.length();
    int m=S2.length();
   int start=0;
   int end=0;
   
   while(start<n || end<m)
   {
       while(start<n && end<m)
       {
        S3.push_back(S1[start]);
       S3.push_back(S2[end]);
       start++;
       end++;
           
       }
       
      while(start<n)
      {
          S3.push_back(S1[start]);
          start++;
          
      }
      
      while(end<m)
      {
          S3.push_back(S2[end]);
          end++;
          
      }
      
      return S3;
      
      
       
   }
}