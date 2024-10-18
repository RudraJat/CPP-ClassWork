#include<iostream>
#include<utility>
using namespace std;
class Student{
    int rollno;
    int fees;
    public:
    Student(int a,int m){
        rollno=a;
        fees=m;
    }
    operator pair<int,int>(){
        return make_pair(rollno,fees);
    }
};
int main(){
    Student st(5,45000);
    pair<int,int> details=st;
    cout<<"Roll no: "<<details.first<<" Fees: "<<details.second;
}