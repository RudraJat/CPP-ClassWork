#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec ={1,5,8,9,6,7,3,2,0};
    sort(vec.begin(),vec.end());
    for(int i=0;i<9;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}