#include<iostream>
#include<stack>
using namespace std;

void reverse(string s){
    stack<string> st;
    for(int i =0;i<s.length();i++){
        string word="";
        while(s[i]!=' '&&i<s.length()){
           word+=s[i];
           i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" "<<endl;
        st.pop();
    }
    cout<<endl;
}
int main(){
    string s="HEY, hello bye chalo ji";
    reverse(s);
}