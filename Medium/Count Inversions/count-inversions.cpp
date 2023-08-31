//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    void merge(long long arr[],long long low ,long long mid,long long high,long long &cnt ){
        
        vector<long long>temp;
        
         long long i=low;
         long long j=mid+1;
         
         while(i<=mid && j<=high){
             if(arr[i]<=arr[j]){
                 temp.push_back(arr[i++]);
             }else{
                 cnt+=(mid-i+1);
                 temp.push_back(arr[j++]);
             }
         }
         
         while(i<=mid){
              temp.push_back(arr[i++]);
         }
         
         while(j<=high){
               temp.push_back(arr[j++]);
         }
         
         for(int i=low;i<=high;i++){
             arr[i]=temp[i-low];
         }
      
    }
    
    
     void mergeSort(long long arr[],long long low,long long high,long long &cnt){
       if(low>=high)return ;
       
       long long int mid=(low+high)/2;
       
       mergeSort(arr,low,mid,cnt);
       mergeSort(arr,mid+1,high,cnt);
       merge(arr,low,mid,high,cnt);
   } 
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long int cnt=0;
        mergeSort(arr,0,N-1,cnt);
        
        return cnt;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends