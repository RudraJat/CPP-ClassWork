//It returns 2 integer
// #include<iostream>
// #include<utility>
// using namespace std;
// class Student{
//     int rollno;
//     int fees;
//     public:
//     Student(int a,int m){
//         rollno=a;
//         fees=m;
//     }
//     operator pair<int,int>(){
//         return make_pair(rollno,fees);
//     }
// };
// int main(){
//     Student st(5,45000);
//     pair<int,int> details=st;
//     cout<<"Roll no: "<<details.first<<" Fees: "<<details.second;
// }


//2nd way
#include<iostream>
#include<string>
using namespace std;
class Stu{
    int roll;
    int fees;
    public:
    Stu(int a, int m){
        roll=a;
        fees=m;
    }
    operator string(){
        return "Roll No: "+to_string(roll)+", Fees: "+to_string(fees);
    }
};
int main(){
    Stu st(4, 45550);
    string result =st;
    cout<<"Details: "<<result<<endl;
    return 0;
}