#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string s){
    stack<char> st;
    int n=s.size();
    bool ans =true;
    for(int i =0;i<n;i++){
        
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }

        else if(s[i]==')'){
            if(!st.empty()&&st.top()=='('){
                st.pop();
            }else{
                ans=false;
                break;
            }
        }

        else if(s[i]=='}'){
            if(!st.empty()&&st.top()=='}'){
                st.pop();
            }else{
                ans=false;
                break;
            }
        }

        else if(s[i]==']'){
            if(!st.empty()&&st.top()=='['){
                st.pop();
            }else{
                ans=false;
                break;
            }
        }

    }

    if(!st.empty())
        return false;
    return ans;

}
int main(){
    string s="{([])}";
    if(isvalid(s)){
        cout<<"balanced paranthesis"<<endl;
    }else{
        cout<<"unbalanced paranthesis"<<endl;
    }
}