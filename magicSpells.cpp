#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {  
  /* Enter your code here */

    /*
    Given a class Base of which there is a derived class Derived, dynamic_cast will convert a Base pointer to a Derived pointer if and only if the actual object pointed at is in fact a Derived object 

    If it fails it becomes NULL
    */
    
    Fireball *fire = dynamic_cast<Fireball*>(spell);
    Frostbite *frost = dynamic_cast<Frostbite*>(spell);
    Thunderstorm *thunder = dynamic_cast<Thunderstorm*>(spell);
    Waterbolt *water = dynamic_cast<Waterbolt*>(spell);
    
    if (fire) {
        fire->revealFirepower();
    }
    else if (frost) {
        frost->revealFrostpower();
    }
    else if (thunder) {
        thunder->revealThunderpower();
    }
    else if (water) {
        water->revealWaterpower();
    }
    else {
        //Didn't write this part. Longest Common Subsequence problem
        string scrollName = spell->revealScrollName();
        string inJournal = SpellJournal::read();
        //string b = SpellJournal::journal;
        int length1 = scrollName.size();
        int length2 = inJournal.size();
        vector<vector<int>> s(length1+1, vector<int>(length2+1, 0));
        for (int i = 0; i < length1; i++) {
            for (int j = 0; j < length2; j++)
                s[i+1][j+1] = max(s[i][j]+(scrollName[i]==inJournal[j]), max(s[i+1][j], s[i][j+1]));
        }
        cout << s[length1][length2] << '\n';        
    }
}

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}    
    
