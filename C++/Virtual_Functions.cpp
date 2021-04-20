#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
static int StudentId = 0;
static int ProfessorId = 0;

class Person{
public:
    string name;
    int age;   

    virtual void getdata() {
        cin >> name;
        cin >> age;
    }
    virtual void putdata() {
        cout << name << " " << age << " ";
    }
};
class Professor:public Person{
public:
    int publications; 
    int p_id;
    Professor(){
        ProfessorId++;
        p_id=ProfessorId;
    }
    void getdata(){
        Person::getdata();
        cin>>publications;
    }
    
    void putdata(){
        Person::putdata();
        cout<<publications<< " "<<p_id<<endl;
    }
};

class Student:public Person{
public:
    int marks[6];
    int s_id;
    Student(){
        StudentId++;
        s_id=StudentId;
    }
    void getdata(){
        Person::getdata();
        for(int i = 0; i<6; i++){
            cin>>marks[i];
        }
    }
    
    void putdata(){
        int total=0;
        for(int i : marks){
            total += i;
        }
        Person::putdata();
        cout<<total<<" "<<s_id<<endl;
    }
};
int main(){
