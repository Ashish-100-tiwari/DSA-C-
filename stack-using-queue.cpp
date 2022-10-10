// #include<bits/stdc++.h>
// using namespace std;

// class Stack{
//     int N;
//     queue<int> q1;
//     queue<int> q2;
//     public:
//     Stack(){
//         N=0;
//     }

//     void push(int val){
//         q2.push(val);
//         N++;
//         while(!q1.empty()){
//             q2.push(q1.front());
//             q1.pop();
//         }
//         queue<int> temp ;
//         temp=q1;
//         q1=q2;
//         q2=temp;
//     }

//     void pop(){
//         q1.pop();
//         N--;
//     }

//     int top(){
//         return q1.front();
//     }

//     int size(){
//         return N;
//     }

// };

// int main(){
//     Stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.pop();
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
    


// }
#include "iostream"
using namespace std;

int main(){
    int n=0;
    int r=0,l=0;
    int arr[n][n];
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
             if(i==j){
                r+=arr[i][j];
            }

            if((i+j)==(n-1)){
                l+=arr[i][j];
            }

        }
    }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){

           
    //     }
    // }

    cout<<abs(r-l)<<endl; 
}
