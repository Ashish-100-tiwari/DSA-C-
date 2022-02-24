// // print sum 
// #include<iostream>
// using namespace std;

// int sum(int n ){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }
// int main(){
//     cout<<sum(5)<<endl;
// }
// print n*p
// #include<iostream>
// using namespace std;

// int pow(int n, int p){
//     if(p==0){
//         return 1;
//     }
//     return n*pow(n,p-1);
// }
// int main(){
//     cout<<pow(4,2)<<endl;
// }
//factorial
// #include<iostream>
// using namespace std;

// int fact(int n ){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){
//     cout<<fact(5)<<endl;
// }
// fabinaci
// #include<iostream>
// using namespace std;

// int fab(int n ){
//     if(n==0||n==1){
//         return n ;
//     }
//     return fab(n-1)+fab(n-2);
// }

// int main(){
//     cout<<fab(7)<<endl;
// }
//check array is sorted or not 
// #include<iostream>
// using namespace std;

// bool check(int arr[],int n ){
//     if(n==0){
//         return true;
//     }
//     bool restarray = check(arr+1,n-1);
//     if(arr[0]<arr[1]&&restarray){
//         return true;
//     }else{
//     return false;
//     }
// }

// int main(){
//      int arr[]={1,2,8,5,6,7};
//      cout<<check(arr,6);
// }
//print a number in decending order
// #include<iostream>
// using namespace std;

// void dec(int n )
// {
//     if(n==1){
//         cout<<"1"<<endl;
//         return ;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }

// int main(){
//     dec(4);
// }
// print incresing order
// #include<iostream>
// using namespace std;

// void inc(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     inc(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     inc(4);
// }
// check the first occurns 
// #include<iostream>
// using namespace std;
// 
// int checkfirst(int arr[],int i,int n,int key){
//     if(n==0){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     checkfirst(arr,i+1,n-1,key);
// }
// int main(){
//     int arr[]={1,1,1,1,4,1,1,1,4};
//     cout<<checkfirst(arr,0,9,4);
// }
//check last occurns 
// #include<iostream>
// using namespace std;

// int checklast(int arr[],int i ,int n,int key){
//     if(n==i){
//         return -1;
//     }
//     int restarray = checklast(arr,i+1,n,key);
//     if(restarray!=-1){
//         return restarray;
//     }
    
//     if(arr[i]==key){
//         return i;
//     }
//     return -1;
// }

// int main(){
//     int arr[]= {1,1,1,1,1,4,11,1,4};
//     cout<<checklast(arr,0,9,4);
// }
// print string recursively
// #include<iostream>
// using namespace std;

// void prints(string s){
//     if(s.length()==0){
//         return;
//     }
//     char ch = s[0];
//     prints(s.substr(1));
//     cout<<ch<<endl;
    
// }
// int main(){
//     prints("binod");
// }
// replace pi from the string 
// #include<iostream>
// using namespace std;

// void replacepi(string s){
//     if(s.length()==0){
//         return ;
//     }
//     if(s[0]=='p'&&s[1]=='i'){
//         cout<<"3.14";
//         replacepi(s.substr(2));
//     }else{
//         cout<<s[0];
//         replacepi(s.substr(1));
//     }
// }

// int main(){
//     replacepi("pppppppipppppippppi");
// }
// tower of hanoi
// #include<iostream>
// using namespace std;
// 
// void towerofhanoi(int n,char src,char dest,char helper){
//     if(n==0){
//         return ;
//     }
//     towerofhanoi(n-1,src,helper,dest);
//     cout<<" moved from "<<src<<" to "<<dest<<endl;
//     towerofhanoi(n-1,helper,dest,src);

// }
// int main(){
//     towerofhanoi(3,'A','C','B');
// }
//remove duplicates from the string 
// #include<iostream>
// using namespace std;

// string removedup(string s){
//     if(s.length()==0){
//         return " " ;
//     }
//     char ch =s[0];
//     string ans = removedup(s.substr(1));
//     if(ch==ans[0]){
//         return ans;
//     }else{
//         return (ch+ans);
//     }
// }

// int main(){
//     cout<<removedup("aaaaabbbbbcccccdddd");
// }
//move all x into the last of the string 
// #include<iostream>
// using namespace std;

// string movex(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch =s[0];
//     char hd= s[1];
//     string ans=movex(s.substr(1));
//     if(ch=='x'){
//         return ans+hd+ch;
//     }
//     if(hd=='i'){
//         return ans+hd+ch;
//     }else{
//         return ch+to_string(hd)+ans;
//     }
// }
// int main(){
//     cout<<movex("xijxjxijijxjiixjxjijxjijixijxjxixjxjijxjjxijijxijixjxjjixjijijixjijxijijijijx");
// }
// substring of the string 
// #include<iostream>
// using namespace std;
// void subseq(string s,string ans ){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch =s[0];
//     string ros=s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }
// int main(){
//     subseq("ABC","");
//     cout<<endl;
// }
//generate substring with ascii number 
// #include<iostream>
// using namespace std;
// void subseq(string s , string ans){
//     if(s.length()==0){
//     cout<<ans<<endl;
//     return ;   
//     }
//     char ch =s[0];
//     int code =ch;
//     string ros= s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
//     subseq(ros,ans+to_string(ch));
// }
// int main(){
//     subseq("AB","");
// }
//bineary search 
// #include<iostream>
// using namespace std;

// int binearysearch(int arr[],int n , int key){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid= (s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(arr[mid]>key){
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,2,3,9,0,6,7};
//     cout<<binearysearch(arr,7,9);
// }
//selection sort
#include<iostream>
using namespace std;


int main(){
    int n;
    int arr[n];
    cout<<"enter the element in the array";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n-1;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}