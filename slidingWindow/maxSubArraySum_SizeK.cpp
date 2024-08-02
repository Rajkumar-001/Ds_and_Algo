#include<bits/stdc++.h>
using namespace std;


int helper(int arr[],int n,int k){

    int i=0;
    int j=0;

    int sum=0;
    int maxSum=INT_MIN;

    while(j < n){


        sum+=arr[j];
        if(j-i+1 < k)j++;
        else if(j-i+1==k){

            maxSum=max(sum,maxSum);
            sum-=arr[i];
            i++;
            j++;
        }

    }


    return maxSum;



    

}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i=0;i<n;i++)cin>>arr[i];

    int k;
    cin>>k;


    cout<<helper(arr,n,k)<<endl;

    return 0;


   

}