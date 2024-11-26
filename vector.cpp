#include<iostream>
#include<vector>
using namespace std;
int main(){
    //1st way to intialize vector
    vector <int> vector1={1,2,3,4,5};
    

    //adding element at last
    vector1.push_back(6);
    vector1.push_back(7);
    //2nd way
    vector<int> vector2{1,2,7,8,9};
    //3rd way
    vector<int>vector3(5,18);
    for(int i=0;i<7;i++){
        cout<<vector1[i]<<" ";
    }
    cout<<endl;
    
    
    //delete element from last
    vector1.pop_back();
    for(int i=0;i<vector1.size();i++){
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


    //FOR PRINTING VALUE OF SPECIFIC INDEX
    cout<<"Element of vector3 at Index 0: "<<vector3.at(0)<<endl;
    cout<<"Element of vector3 at Index 0: "<<vector3.at(0)<<endl;
    cout<<"Element of vector3 at Index 0: "<<vector3.at(0)<<endl;

    // take input from user
    int n;
    cin>>n;
    vector<int>vector4;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vector4.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<vector4[i]<<" ";
    }
    return 0;
}