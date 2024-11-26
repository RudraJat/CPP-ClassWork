#include<iostream>
#include<vector>
using namespace std;
int main(){
    //1st way to intialize vector
    vector <int> vector1={1,2,3,4,5};
    //2nd way
    vector<int> vector2{1,2,7,8,9};
    //3rd way
    vector<int>vector3(5,18);
    for(int i=0;i<5;i++){
        cout<<vector1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<vector2[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<vector3[i]<<" ";
    }
    cout<<endl;
    return 0;
}