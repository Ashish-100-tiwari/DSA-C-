#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,ans;
    cin>>n;
    int arr[n];
    int h[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        h[arr[i]]++;
    }
    int max=h[1];
    for(int i=2;i<n;i++)
    {
        if(max<h[i])
        {
            ans=i;
        }
    }
    cout<<ans<<endl;
}
