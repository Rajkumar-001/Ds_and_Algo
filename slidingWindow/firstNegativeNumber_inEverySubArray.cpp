#include<bits/stdc++.h>
using namespace std;

void helper(int arr[],vector<int>&ans,int n,int k){

    int i=0;
    int j=0;
    deque<int>dq;

    while(j < n){
        if(arr[j]<0)dq.push_back(arr[j]);

        if( (j-i+1) < k){
            j++;
        }else if((j-i+1)==k){
            if(dq.empty()==true){
                ans.push_back(0);
            }else{
                ans.push_back(dq.front());
            }

            if(dq.front()==arr[i])dq.pop_front();

            i++;
            j++;

        }

    }



}


int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i=0;i<n;i++)cin>>arr[i];

    int k;
    cin>>k;



    vector<int>ans;

    helper(arr,ans,n,k);


    for (auto it:ans)cout<<it<<" ";


}