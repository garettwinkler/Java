#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <string>

int studentID = 0;
int professorID = 0;

class Person {
    protected:
        string name;
        int age;
    public:
        virtual void getdata() {}
        virtual void putdata() {}
        
};

class Professor : public Person {
    public:
        int publications;
        int cur_id;

        void getdata() {
            cin >> name >> age >> publications;
            cur_id = ++professorID;
            
        }
    
        //should print name, age, publications and the cur_id    
        void putdata() {
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
        
};

class Student : public Person {
    public:
        int marks[6];
        int cur_id;
    
        void getdata() {
            cin >> name >> age;
            for (int i = 0; i < 6; i++) {
                cin >> marks[i];
            }
            cur_id = ++studentID;
        }

        // should print the name, age, sum of the marks and the cur_id of the student    
        void putdata() {
            cout << name << " " << age << " ";
            int sum = 0;
            for (int i = 0; i < 6; i++) {
                sum += marks[i];
            }
            cout << sum << " " << cur_id << endl;
        }    
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
