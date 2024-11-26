#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec1={1,2,3,4};
    vector<int> vec2={4,3,2,1};
    

    //Swapping the vectors
    swap(vec1,vec2);

    //Printing the vectors
    cout<<"vec1: ";
    for(auto i: vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"vec2: ";
    for(auto i: vec2){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}