#include<bits/stdc++.h>
using namespace std;


void helper(int arr[],vector<int>&ans,int n){
    

}

int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;

    int arr[n];
    for (int i=0;i<n;i++)cin>>arr[i];

    vector<int>ans;

    helper(arr,ans,n);
    for (auto it:ans)cout<<it<<endl;
}