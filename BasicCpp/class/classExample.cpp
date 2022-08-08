#include<iostream>
#include<string>
using namespace std;
// 기초 클래스(부모 클래스) 지정
class Person{
    private:
        string name_;
        int age_;
    public:
        Person(const string& name, int age); // 기초 클래스 생성자의 선언
        void ShowPersonInfo(); // 멤버함수 정의
}
// 파생 클래스(상속 클래스) 지정
class Student::public Person{
    private:
        int student_id_;
    public:
        Student(int sid, const string& name, int age); // 파생 클래스 생성자의 선언
}
// 기초클래스 생성자의 정의
Person::Person(const string& name, int age){
    name_ = name;
    age_ = age;
}
//
void Person::ShowPersonInfo(){
    cout << name_ << "의 나이는" << age_ << "살 입니다." << endl;
    return;
}
// 파생클래스 생성자의 정의
void Student::Student(int sid, const string& name, int age):Person(name, age){
    sid_ = sid;
}
int main(){
    Student Lee(20172405, "현서", 25);
    Lee.ShowPersonInfo();
    return 0;
}
