#include <iostream>
using namespace std;
class student{
    string name;
    private:
    int roll;
    float marks;
public:
    void setStudentData(){
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the roll number"<<endl;
        cin>>roll;
        cout<<"enter the marks"<<endl;
    cin>>marks;    }

    void getStudentData(){
        cout<<"name:"<<name<<endl;
        cout<<"roll number"<<roll<<endl;
        cout<<"marks"<<marks<<endl;

    }
};

int main(){
    student s[5];
    for(int i=0;i<5;i++){
        cout<<"student details:"<<i;
        s[i].setStudentData();
    }
   
    for (int i = 0; i<5; i++) {
        cout << "\nStudent " << i << ":\n";
        s[i].getStudentData();}
}
