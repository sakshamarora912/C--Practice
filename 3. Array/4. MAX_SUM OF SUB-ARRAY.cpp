#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    int mx=INT_MIN,currentSum=0;
    for(int i=0;i<n;i++){
        // for(int j=i;j<n;j++){
        //     int sum=0;
        //     for(int k=i;k<=j;k++){
        //         // cout<<arr[k]<<" ";
        //         sum=sum+arr[k];
        //     }
        //}

       //KADANE ALOGORITHM

        currentSum=currentSum+arr[i];
        if(currentSum<0){currentSum=0;}
         mx=max(mx,currentSum);
    }
    cout<<mx;
    return 0;
}
