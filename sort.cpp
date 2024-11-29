// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int c;
//     cin>>c;
//     if(c==1){
//         sort(arr,arr+n);
//     }else if(c==2){
//         sort(arr,arr+n,greater<>());
//     }else{
//         cout<<"invalid choice"<<endl;
//         return 1;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for(int num: arr){
        cout<<num<<" ";
    }
    return 0;
}