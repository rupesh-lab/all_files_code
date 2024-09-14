#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int marks;
    int semester;
    
};
void display(student s){
    cout<<s.name<<" "<<s.marks<<" "<<s.semester<<endl;
}
int main(){
    student s1;
    s1.name="rupesh";
    s1.marks=34;
    s1.semester=1;
    
    student s2;
    s2.name="rupesh";
    s2.marks=34;
    s2.semester=1;

    student s3;
    s3.name="rupesh";
    s3.marks=34;
    s3.semester=1;
    
    display(s1);
    display(s2);
    display(s3);
    
}