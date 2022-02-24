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
//     int arr[] = {1,3,5,6,7};
//     cout<<sorted(arr,5);
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////print the number in decreasing order 
// #include<iostream>
// using namespace std;

// void dec(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return ;
//     }
//     cout<<n<<endl;
//     return dec(n-1);
// }
// int main(){
//    int n =8;
//    dec(n); 
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////// increasing order 
// #include<iostream>
// using namespace std;

// void inc(int n ){
//     if(n==1){
//         cout<<"1"<<endl;
//         return ;
//     }
//     inc(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n =9;
//     inc(n);
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////// occurence of the array 
// #include<iostream>
// using namespace std;
// int firstocc(int arr[],int n ,int i ,int key){
//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);
// }
// int main(){
//     int arr[]={9,7,6,5,4,3,2,2};
//     cout<<firstocc(arr,8,0,6)<<endl;

// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////last occrence of the array

// #include<iostream>
// using namespace std;
// int  lastocc(int arr[],int n , int i,int key){
//     if(i==n){
//         return -1;
//     }
//     int restarray = lastocc(arr,n,i+1,key);
//     if(restarray!=-1){
//         return restarray;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return -1;
// }
// int main(){
//     int arr[]={8,7,6,5,4,3,2,3};
//     cout<<lastocc(arr,8,0,3);
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////// reverse a string using recursion
// #include<iostream>
// using namespace std;

// void reverse(string s ){
//     if(s.length()==0){
//         return ;
//     }
//     string subtr= s.substr(1);
//     reverse(subtr);
//     cout<<s[0]<<endl;
    
// }

// int main(){
//     reverse("binod");
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
// //replace pi with 3.14 in string 

// #include<iostream>
// using namespace std;

// void replace(string s ){
//     if(s.length()==0){
//         return ;
//     }
//     if(s[0]=='p'&&s[1]=='i'){
//         cout<<"3.14";
//         replace (s.substr(2));
//     }else{
//         cout<<s[0];
//         replace  (s.substr(1));
//     }
// }
// int main(){
//     replace("pppippppippppipppi");
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
//tower of hanoi 
// #include<iostream>
// using namespace std;

// void hanoi(int n , char src,char helper,char dest){
//     if(n==0){
//         return ;
//     }
//     hanoi(n-1,src,dest,helper);
//     cout<<"move from "<<src<<"to"<<dest<<endl;
//     hanoi(n-1,helper,src,dest);
// }

// int main(){
//       hanoi(3,'A','B','C');
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
// remove all duplicates from the string 
// #include<iostream>
// using namespace std;

// string  remove(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch =s[0];
//     string ans = remove(s.substr(1));
//     if(ch==ans[0]){
//         return ans;
//     }
//     return (ch+ans);
// }
// int main(){
//     cout<<remove("aaaabbbbbccccdddd")<<endl;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
//move all the x to the end of the string
// #include<iostream>
// using namespace std;

// string moveallx(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch =s[0];
//     string ans = moveallx(s.substr(1));
//     if(ch=='x'){
//         return ans+ch;
//     }
//     return ch+ans;
// }
// int main(){
//    cout<<moveallx("axxbdcefxkdjh");
// // }
// #include<iostream>
// using namespace std;

// void subseq(string s ,string ans ){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch =s[0];
//     int code =ch ;
//     string ros= s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
//     subseq(ros,ans+to_string(code));
// }
// int main(){
//     subseq("AB","");
//     cout<<endl;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////print all possible word from phone digits 
// #include<iostream>
// using namespace std;

// string keypad[] ={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
// void key(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = s[0];
//     string code=keypad[ch-'0'];
//     string ros= s.substr(1);
//     for(int i=0;i<code.length();i++ ){
//         key(ros,ans+code[i]);
//     }
// }
// int main(){
//     key("23","");
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////
// print permutation
// #include<iostream>
// using namespace std;

// void permutation(string s , string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i =0;i<s.length();i++){
//         char ch = s[i];
//         string ros = s.substr(0,i)+s.substr(i+1);
//         permutation(ros,ans+ch);
//     }
// }

// int main(){
//     permutation("ABC","");
// }
// #include<iostream>
// using namespace std;

// string removeDup(string s ){
//     if(s.length()==0){
//         return "";
//     }

//     char ch = s[0];
//     string ans= removeDup(s.substr(1));
//     if(ch==ans[0]){
//         return ans ;
//     }
//     return (ch+ans);
// }

// int main(){
//     cout<<removeDup("aaaabbbbccccdddd")<<endl;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////move all x to the end of the string 
// #include<iostream>
// using namespace std;

// string moveallx(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch = s[0];
//     string ans = moveallx(s.substr(1));
//     if(ch=='x'){
//         return ans+ch;
//     }
//     return ch+ans ;
// }

// int main(){
//     cout<<moveallx("aaxsssxdddsxxxjjjdx")<<endl;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////string subsequences 
// #include<iostream>
// using namespace std;

// void subseq(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch = s[0];
//     string ros= s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }
// int main(){
//     subseq("ABC","");
//     cout<<endl;
// }
/////////////////////////////////////////////////////////////////////////////////////////////////////////// generate suubstring with ASCII number 
// #include<iostream>
// using namespace std;

// void subseq(string s , string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch = s[0];
//     int code = ch ;
//     string ros = s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
//     subseq(ros,ans+to_string(code));
// }
// int main(){
//     subseq("AB","");
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////print all possible word from phone digits 
// #include<iostream>
// using namespace std;

// string keypadarr[]={"","/","abc","def","ghi","jki","mno","pqrs","tuv","wxyz"};

// void keypad(string s,string ans ){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = s[0];
//     string code = keypadarr[ch-'0'];
//     string ros=s.substr(1);
//     for(int i =0;i<code.length();i++){
//         keypad(ros,ans+code[i]);
//     }
// }
// int main(){
//     keypad("23","");
//     return 0;
// }