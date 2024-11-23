#include<bits/stdc++.h>
using namespace std;
bool isValidEmail(const string &email){
    if(email.empty())return false;
    if(!isalpha(email[0]))return false;
    size_t atpos=email.find('@');
    size_t dotpos=email.find('.');
    if(atpos==string::npos||dotpos==string::npos||atpos>dotpos)return false;
    if(dotpos==email.length()-1)return false;
    return true;
}
int main(){
    string email;
    cin>>email;
    try{
        if(isValidEmail(email)){
            cout<<"Email is Valid."<<endl;
        }else{
            throw invalid_argument("Email is Inavlid");
        }
    }catch(...){
        cout<<"Error occured..."<<endl;
        cout<<"Email is invalid..."<<endl;
    }
    return 0;
}