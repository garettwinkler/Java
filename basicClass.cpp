#include <iostream>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
    public:
        int age;
        string first_name;
        string last_name;
        int standard;
    
        void set_age(int newAge) {
            age = newAge;
        }
    
        void set_first_name (string newFirstName) {
            first_name = newFirstName;
        }

        void set_last_name (string newLastName) {
            last_name = newLastName;
        }
    
        void set_standard (int newStandard) {
            standard = newStandard;
        }
    
        int get_age () {
            return age;
        }    
    
        string get_first_name () {
            return first_name;
        }

        string get_last_name () {
            return last_name;
        }
    
        int get_standard() {
            return standard;
        }
    
        string to_string() {
            string fullString = "";
            ostringstream theStringStream;
            theStringStream << age << "," << first_name << "," << last_name << "," << standard;
            //either of these work. Testing streamStream vs std toString
            //return fullString + std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
            return theStringStream.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
