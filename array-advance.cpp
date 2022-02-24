// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     const int N=1e6+2;
//     int idx[N];
//     for(int i =0;i<N;i++){
//         idx[i]=-1;
//     }
//     int minidx =INT_MAX;
//     for(int i =0;i<n;i++){
//         if(idx[arr[i]]!=-1){
//             minidx=min(minidx,idx[arr[i]]);
//         }else{
//             idx[arr[i]]=i;
//         }
//     }
//     if(minidx=INT_MAX){
//         cout<<"-1"<<endl;
//     }else{
//         cout<<minidx+1<<endl;
//     }
// }
//
// #include<iostream>
// #include "bits/stdc++.h"
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int a[n];    
//     for(int i =0;i<n;i++){
//         cin>>a[i];
//     }    
//     const int N=1e6+2;    
//     int idx[N];    
//     for(int i =0;i<N;i++){
//         idx[i]=-1;
//     }
//     int minidx=INT_MAX;
//     for(int i =0;i<n;i++){
//         if(idx[a[i]!=-1]){
//             minidx=min(minidx,idx[a[i]]);
//         }else{
//             idx[a[i]]=i;
//         }
//     }
//     if(minidx==INT_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<<minidx+1<<endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	int T ;
// 	cin>>T;
// 	while(T--){
// 	  int b,a;
// 	  int n=0;
// 	  cin>>b>>a;
// 	  for(int i=0;i<a;i++){
// 	      if(b>=2){
// 	          n++;
// 	      }
// 	      b=b-2;
// 	  } 
// 	   cout<<n<<endl; 
// 	}// your code goes here
// 	return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	int T ;
// 	cin>>T;
// 	while(T--){
// 	  int n ,x;
//       int b;
//       cin>>n>>x;
//       if(n>=x){
//        cout<<x<<endl;
// 	  }
//       if(n<x){
//       x=x-n-1;
//       cout<<x<<endl;
// 	}// your code goes here
//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	int T ;
// 	cin>>T;
// 	while(T--){
// 	  int n ,x;
//       cin>>n>>x;
//     while(true){
//     if(x<=n){
//     cout<<x<<endl;
//     break;
//     }
//     x=x-n-1;
// 	}
// 	// your code goes here
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	int T ;
// 	cin>>T;
// 	while(T--){
// 	int n;
//     cin>>n;
//     int count=0;
//     while(n>0){
//         int x,y,px,py;
        
//         cin>>x>>y;
//         // if(x!=px&&y!=py){
//         //     count++;
//         // } 
//         // if(x!=px&&y==py){
//         //     count++;
//         // }
//         // if(x==px&&y!=py){
//         //     count++;
//         // }
//         // if(x==px&&y==py){
//         //     count++;
//         // }
//         if(x==px){
//             count++;
//         }
//         if(x!=px){
//             count++;
//         }
//         if(y==py){
//             count++;
//         }
//         if(y!=py){
//             count++;
//         }
//         // if(x==y){
//         //     count+2;
//         // }
//         px=x;
//         x=0;
//         py=y;
//         y=0;
//         n--;
//     }
//     cout<<count<<endl;
// 	// your code goes here
//     }
//     return 0;
// }
//subarray 
// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i =0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k =i;k<=j;k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }
//max sum of subarray 


