// // #include "bits/stdc++.h"
// // using namespace std;

// // int main(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     for(int i =0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     for(int i=0;i<n;i++){
// //         for(int j=i;j<n;j++){
// //             for(int k=i;k=j;k++){
// //                 cout<<arr[k]<<" ";
// //             }
// //            cout<<endl;
// //         }
// //     }
// //     return 0;
// // }
// // #include <iostream>
// // #include<bits/stdc++.h>
// // using namespace std;

// // int main() {
// // 	// your code goes here
// // 	int n ;
// // 	cin>>n;
// // 	while(n--){
// // 	    long  a,b,c;
// // 	    cin>>a>>b>>c;
// // 	    // if(a>=b&&b>=c||c>=b&&b>=a){
// // 	    //     cout<<b<<endl;
// // 	    // }else if(b>=a&&a>=c||c>=a&&a>=b){
// // 	    //     cout<<a<<endl;
// // 	    // }else{
// // 	    //     cout<<c<<endl;
// // 	    // }
// //         if(a>=b && b>=c || a<=b && b<=c)
// // 			cout << b << endl;
// // 		else if(a>=c && c>=b || a<=c && b>=c)
// // 			cout << c << endl;
// // 		else
// // 			cout << a << endl;
	
// // 	}
// // 	return 0;
// // }
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int n;
// 	cin>>n;
// 	int p;
// 	while(n--){
// 	    int a=0,b=0;
// 	    cin>>a>>b;
// 	    int w,cm;
// 	    if(a>b){
// 	      p=a-b;
// 	      if(cm>p){
// 	          w=1;
// 	      }
// 	      cm=max(cm,p);
// 	    }else{
// 	        p=b-a;
// 	        if(p>cm){
// 	            w=0;
// 	        }
// 	        cm=max(cm,p);
// 	    }
// 	}
// 	return 0;
// }
// subarray
// #include<iostream>
// using namespace std;

// int main(){

// 	int n ;
// 	cin>>n;
// 	int maxsum=INT_MIN;
// 	int arr[n];
// 	for(int i =0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	for(int i =0;i<n;i++){
// 		for(int j =i;j<n;j++){
// 			int sum=0;
// 			for(int k=i;k<=j;k++){
// 				sum+=arr[k];
// 			}
// 			maxsum=max(maxsum,sum);
// 		}
// 	}
// 	cout<<maxsum<<endl;
// 	return 0;
// }
// cumulative sum approch 
