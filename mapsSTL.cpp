#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, int> studentsMap;
    int queries;
    int queryType;
    string name;
    int score;
    cin >> queries;
    for (int i = 0; i < queries; i++) {
        cin >> queryType;
        if (queryType == 1) {
            cin >> name;
            cin >> score;
            map<string, int>::iterator itr = studentsMap.find(name);
            if (itr == studentsMap.end()) {
                studentsMap.insert(make_pair(name, score));    
            }
            else {
                studentsMap[name] += score;
            };
        }
        else if (queryType == 2) {
            cin >> name;
            studentsMap.erase(name);
        }
        else {
            cin >> name;
            //Gives the iterator to the element val if it is found otherwise returns m.end() .                        
            map<string,int>::iterator it = studentsMap.find(name);
            if (it != studentsMap.end()) {
                //cout << it->second << endl;   //equivalent 
                cout << studentsMap[name] << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
    }
    
    //Why doesn't this print everything in the map?
    /*
    map<string, int>::iterator loopIterator;
    for (loopIterator = studentsMap.begin(); loopIterator != studentsMap.end(); loopIterator++) {
        cout << loopIterator->first << endl;
        cout << loopIterator->second << endl;
    }
    */
    return 0;
}
