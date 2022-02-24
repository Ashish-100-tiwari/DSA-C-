// #include<iostream>
// using namespace std;

// void permutation(string s , string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i = 0;i<s.length();i++){
//         char ch = s[i];
//         string ros = s.substr(0,i)+s.substr(i+1);
//         permutation(ros,ans+ch);
//     }
// }
// int main(){
//     permutation("ABC","");
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////count the number of the path possible from start point to end point in gameboard 
// #include<iostream>
// using namespace std;

// int countpath(int s,int e){
//     if(s==e){
//         return 1;
//     }
//     if(s>e){
//         return 0;
//     }
//     int count =0;
//     for(int i =1;i<=6;i++){
//         count+=countpath(s+i,e);
//     }
//     return count ;
// }

// int main(){
//     cout<<countpath(0,3)<<endl;
//     return 0;
// }
//count the number of paths possible in a maze 
// #include<iostream>
// using namespace std;

// int countpath(int n ,int i,int j){
//     if(i==n-1&&j==n-1){
//         return 1;
//     }
//     if(i>=n||j>=n){
//         return 0;
//     }
//     return countpath(n,i+1,j)+countpath(n,j,i+1);
// }
// int main(){
//     cout<<countpath(3,0,0)<<endl;
// }
// #include<iostream>
// using namespace std;

// int tilingways(int n ){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return tilingways(n-1)+tilingways(n-2);
// }

// int main(){
//     cout<<tilingways(4)<<endl;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////friends pairing problem
// #include<iostream>
// using namespace std;

// int friendspairing(int n){
//     if(n==0||n==1||n==2){
//         return n;
//     }
//     return friendspairing(n-1)+friendspairing(n-2)*(n-1);
// }

// int main(){
//     cout<<friendspairing(4)<<endl;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
//01 knapsack problem 
// weight w
// #include<iostream>
// using namespace std;

// void removedup(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch = s[0];
//     string ans = removedup(s.substr(1));
//     if(ch==ans[0]){
//         return ans;
//     }
//     return(ch+ans);
// }
// int main(){
//     cout<<removedup("aaaaaaaaaaabbbbbbcccddd")<<endl;
// }
//tiling problem 
// #include<iostream>
// using namespace std;

// int tiling(int n ){
//     if(n==0||n==1){
//         return n ;
//     }
//     return tiling(n-1)+tiling(n-2);
// }
// int main(){
//     cout<<tiling(4)<<endl;
// }
//friends pairing problem 
// #include<iostream>
// using namespace std;

// int friends(int n){
//     if(n==0||n==1||n==2){
//         return n ;
//     }
//     return friends(n-1)+friends(n-2)*(n-1);
// }

// int main(){
//     cout<<friends(4)<<endl;
// }
// 0-1 knapsack problem
// #include<iostream>
// using namespace std;

// int knapsack(int value[],int wt[],int n,int W){
//     if(n==0||W==0){
//         return 0;
//     }
//     if(wt[n-1]>W){
//         return knapsack(value,wt,n-1,W);
//     }
//     return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
// }

// int main(){
//     int wt[]={10,20,30};
//     int value[]={100,50,150};
//     int W=50;
//     cout<<knapsack(value,wt,3,W)<<endl;
// }
// #include<iostream>
// using namespace std;

// bool issafe(int** arr,int x,int y,int n ){
//     if(x<n&&y<n&&arr[x][y]==1){
//         return true;
//     }
//     return false;
// }

// bool ratinmaze(int** arr,int x,int y,int n,int** solarr){
//     if(x==n-1&&y==n-1){
//         solarr[x][y]=1;
//         return true;

//     }
    
    // if(issafe(arr,x,y,n)){
//         solarr[x][y]=1;
//         if(ratinmaze(arr,x+1,y,n,solarr)){
//             return true;
//         }
//         if(ratinmaze(arr,x,y+1,n,solarr)){
//             return true;
//         }
//         solarr[x][y]=0;
//         return false;
//     }
//     return false;
// }
// int main(){
//     int n ;
//     cin>>n;
//     int** arr=new int*[n];
//     for(int i=0;i<n;i++){
//         arr[i]=new int[n];
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }

//     int** solarr=new int*[n];
//     for(int i=0;i<n;i++){
//         solarr[i]=new int[n];
//         for(int j=0;j<n;j++){
//             solarr[i][j]=0;
//         }
//     }
//     if(ratinmaze(arr,0,0,n,solarr)){
//       for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<solarr[i][j]<<" ";
//         }
//         cout<<endl;
//     }  
//     }
    
// }
//back tracking 
// #include<iostream>
// using namespace std;

// bool issafe(int** arr,int x,int y,int n){
//     if(x<n&&y<n&&arr[x][y]==1){
//         return true;
//     }
//     return false;
// }
// bool ratinmaze(int** arr,int x,int y,int n,int** solarr){
//     if(x==n-1&&y==n-1){
//         solarr[x][y]=1;
//         return true;

//     }
    
//     if(issafe(arr,x,y,n)){
//         solarr[x][y]==1;
//         if(ratinmaze(arr,x+1,y,n,solarr)){
//             return true;
//         }
//         if(ratinmaze(arr,x,y+1,n,solarr)){
//             return true;
//         }
//         solarr[x][y]=0;
//         return false;
//     }
//     return false;

// }

// int main(){
//     int n ;
//     cin>>n;
//     int** arr=new int*[n];
//     for(int i=0;i<n;i++){
//         arr[i]=new int[n];
//     }
//     for(int i =0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int** solarr=new int*[n];
//     for(int i=0;i<n;i++){
//         solarr[i]=new int[n];
//         for(int j =0;j<n;j++){
//             solarr[i][j]=0;
//         }
//     }
//     if(ratinmaze(arr,0,0,n,solarr)){
//         for(int i =0;i<n;i++){
        
//         for(int j=0;j<n;j++){
//             cout<<solarr[i][j]<<" ";
//         }
//         cout<<endl;
//         }

//     }
//     return 0;

// }
//insertion sort
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i =1;i<n;i++){
//         int current=arr[i];
//         int j =i-1;
//         while(arr[j]>current&&j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;
//     }
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
//sum of all sub array
// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
//     int ma=-1999;
//     int arr[n];
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i =0;i<n;i++){
//         int curr=0;
//         for(int j =i;j<n;j++){
//             curr+=arr[j];
//             ma=max(curr,ma);
//         }
//     }
//     cout<<ma;
//     return 0;
// }
//
#include<iostream>
using namespace std;
int main(){
    int t;
   cin>>t;
    while(t--){
       int a ,b,c;
       cin>>a>>b;
       c=a+b;
       cout<<c;
    }
   return 0;
}