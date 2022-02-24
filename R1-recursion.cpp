//to get the sum of the number 
// #include<iostream>
// using namespace std;

// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+sum(n-1);
// }

// int main(){
//     int n ;
//     cout<<"enter the number "<<endl;
//     cin>>n;
//     cout<<sum(n);
// }

//to get the multiple of a number

// #include<iostream>
// using namespace std;

// int pow(int n , int p){
//     if(p==0){
//         return 1;
//     }
//     return n*pow(n,p-1);
// }
// int main(){
//     int n ,p;
//     cout<<"enter the number n";
//     cin>>n;
//     cout<<"enter the number p";
//     cin>>p;
//     cout<<pow(n,p);
// }

// program for n factorial

// #include<iostream>
// using namespace std;

// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n ;
//     cout<<"enter the number ";
//     cin>>n;
//     cout<<fact(n);
// }

// write a program for fibonacci

// #include<iostream>
// using namespace std;

// int fab(int n){
//     if(n==0||n==1){
//         return 1;
//     }
//     return fab(n-1)+fab(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     cout<<fab(n);

// }

// write a program to check the array is sorted or not 

// #include<iostream>
// using namespace std;

// bool sorted(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     bool restarray = sorted(arr+1,n-1);
//     return(arr[0]<arr[1]&&restarray);    
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     cout<<sorted(arr,6);

// }


// write a program to print the number in decreasing order 
// #include<iostream>
// using namespace std;

// void dec(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// int main(){
//     int n =7;
//     dec(n);
// }


// write a program to print the number in increasing order 
// #include<iostream>
// using namespace std;

// void inc(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return ;
//     }
//     inc(n-1);
//     cout<<n<<endl;
// }

// int main(){
//     int n =5;
//     inc(n);
// }
//first and last occurns of the number in an array 

// #include<iostream>
// using namespace std;

// int firstocc(int arr[],int n , int i,int key){
//     if(n==1){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);
// }
// int main(){
//    int arr[]={1,2,3,4,5,6};
//    cout<<firstocc(arr,6,0,4);
// }

// write a program to find the last occurns of the number 

// #include<iostream>
// using namespace std;

// int lastocc(int arr[],int n ,int i,int key){
//     if(i==n){
//         return -1;
//     }
//     int restarray =lastocc(arr,n,i+1,key);
//     if(restarray!=-1){
//         return restarray;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return -1;
// }
// int main(){

//    int arr[]={1,2,3,4,5,4};
//   cout<<lastocc(arr,6,0,4);
// }

////////////////////////////////////////////////////////////////////////////////////////////////
//reverse a string using recursion 
// #include<iostream>
// #include<string>
// using namespace std;

// void reverse(string s){
//     if(s.length()==0){
//         return ;
//     }
//     string ros =s.substr(1);
//     cout<<ros[0]<<endl;
//     reverse(ros);
// }
// int main(){
//     reverse(" binod");
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////
//replace pi with 3.14 using recursion

// #include<iostream>
// using namespace std;

// void replace(string s){
//     if(s.length()==0){
//         return ;
//     }
//     if(s[0]=='p'&&s[1]=='i'){
//         cout<<"3.14";
//         replace(s.substr(2));
//     }else{
//         cout<<s[0];
//         replace(s.substr(1));
//     }
// }
// int main(){
//     replace("pipipipipipipipiippiipp");
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////
// tower of hanoi
// #include<iostream>
// using namespace std;
// void towerofhanoi(int n , char src, char dest , char helper){
//     if(n==0){
//         return;
//     }
//     towerofhanoi(n-1,src,helper ,dest);
//     cout<<"move from" <<src<<"to"<<dest<<endl;
//     towerofhanoi(n-1,helper,dest,src);
// }
// int main(){
//     towerofhanoi(3,'A','B','C');
// }
////////////////////////////////////////////////////////////////////////////////////////////////
// check if an array is sorted or not 
// #include<iostream>
// using namespace std;

// bool sorted(int arr[],int n){
//     if(n==1){
//         return true ;
//     }
//     bool restarray = sorted(arr+1,n-1);
//     return (arr[0]<arr[1]&&restarray);
// }
// int main(){
//     int arr[]={1,2,9,4,5};
//     cout<<sorted(arr,5)<<endl;
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////
//print number till n , decreasing order
// #include<iostream>
// using namespace std;
// void dec(int n ){
//     if(n==1){
//         cout<<"1"<<endl;
//         return ;
//     }
//     cout<<n<<endl;
//     dec(n-1);

// }

// int main(){
//     int n ;
//     cin>>n ;
//     dec(n);
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
//print the number till n , increasing order 
// #include<iostream>
// using namespace std;
// void inc(int m){
//     if(m==1){
//         cout<<"1"<<endl;
//         return;
//     }
//     inc(m-1);
//     cout<<m<<endl;
// }
// int main(){
//     int m ;
//     cin>>m;
//     inc(m);
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
//find the first occurence of a number in an array 
#include<iostream>
using namespace std;

// int firstocc(int arr[],int n ,int i,int key){
//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);
// }
// int lastocc(int arr[],int n,int i,int key){   
//     if(i==n){
//      return -1;
//     }
//    int restarray = lastocc(arr,n,i+1,key);
//    if(restarray!=-1){
//        return restarray;
//    }
//    if(arr[i]==key){
//        return i;
//    }
//    return -1;
// }
// int main(){
//     int arr[]={1,3,5,4,3,2,4,};
//     // cout<<firstocc(arr,7,0,4);
//     cout<<lastocc(arr,7,0,4);
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
//print a string in reverse order
// #include<iostream>
// using namespace std;

// void reverse(string s){
//     if(s.length()==0){
//         return ;
//     }
//     string ros=s.substr(1);
//     reverse(ros);
//     cout<<s[0]<<endl;
// }
// int main(){
//     reverse("binod");
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
//replace pi with 3.14 in string 
// #include<iostream>
// using namespace std;
// void replace(string s){
//     if(s.length()==0){
//         return ;
//     }
//     if(s[0]=='p'&&s[1]=='i'){
//         cout<<"3.14";
//         replace(s.substr(2));
//     }else{
//         cout<<s[0];
//         replace(s.substr(1));
//     }
// }
// int main(){
//     replace("pippppppipippppppp");
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
//tower of hanoi 
// #include<iostream>
// using namespace std;

// void towerofhanoi(int n , char src,char dest,char helper){
//     if(n==0){
//         return;
//     }
//     towerofhanoi(n-1,src,helper,dest);
//     cout<<"move from "<<src<<" to "<<dest<<endl;
//     towerofhanoi(n-1,helper,dest,src);
// }

// int main(){
//     towerofhanoi(4,'A','B','C');
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////remove all duplicates from the string 
// #include<iostream>
// using namespace std;
// string remove(string s){
//     if(s.length()==0){
//         return " ";
//     }
//     char ch = s[0];
//     string ans = remove(s.substr(1));
//     if(ch==ans[0]){
//         return ans;
//     }
//     return(ch+ans);
// }
// int main(){
//     cout<<remove("aaaaaaaaabbbbbbbccccccccc")<<endl;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
// move all x to the end of the string 
// #include<iostream>
// using namespace std;

// string moveallx(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ans = moveallx(s.substr(1));
//     if(ch =='x'){
//         return ans+ch;
//     }
//     return ch+ans;
// }
// int main(){
//     cout<<moveallx("axxbdxcefxhix");
// }
// #include<iostream>
// using namespace std;

// bool sorted(int arr[],int n){
//     if(n==1){
//         return true ;
//     }
//     bool restarrray = sorted(arr+1,n-1);
//     return (arr[0]<arr[1]&&restarrray);
// }
// int main(){
//     int arr[] = {1,9,5,6,7};
//     cout<<sorted(arr,5);
// }
