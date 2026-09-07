
#include <iostream>
#include <random>
#include <string>
#include <ctime>


using namespace std;


class Hero{
    private:
           int strength;
           int courage;
           string name;

    public:
        Hero(string setheroname) {
            name = setheroname;
            strength = (rand() % 71) + 30;
            courage = (rand() % 6) + 5;

        }



        void training(int days) {
            strength += (5 * days);
        }

        void therapy(){
            courage += (rand() % 5) + 1;
        }


        
        void losecourage(int amount) {
            courage -= amount;
         }
        
            
        
        int getStrength() {
            return strength;
        }

        int getCourage() {
            return courage;
        }

        string getname() {
            return name;
        }
};

void quest(Hero& hero1) {
    int Monsterstrength = (rand() % 71) + 30;

    if (hero1.getStrength() > Monsterstrength) {
        cout << hero1.getname() << " has won the battle and is coming back home!" << endl;
        hero1.losecourage(1);
    }
    else if (hero1.getStrength() == Monsterstrength) {
        cout << hero1.getname() << " the battle resulted in a draw, " << hero1.getname() << " will be coming home!." << endl;
        hero1.losecourage(2);
    }
    else {
        cout << hero1.getname() << hero1.getname() << " unfortunately lost the battle!" << endl;
        hero1.losecourage(4);
    }


        
}

int main()
{
    srand(time(0));
    Hero hero1("SaadtheHero");

    cout << "First hero:" << endl;
    cout << endl;

    cout << "The hero's name is " << hero1.getname() << endl;
    cout << hero1.getname() << "'s strength currently is " << hero1.getStrength() << endl;
    cout << hero1.getname() << "'s courage currently is " << hero1.getCourage() << endl;

    hero1.training(3);
    hero1.therapy();
    cout << endl;
    cout << "Stats after training and therapy:" << endl;

    cout << hero1.getname() << "'s strength currently is " << hero1.getStrength() << endl;
    cout << hero1.getname() << "'s courage currently is " << hero1.getCourage() << endl;

    cout << endl;

    quest(hero1);
    cout << hero1.getname() << "'s stats after the quest is " << hero1.getStrength() << " strength and " << hero1.getCourage() << " courage" << endl;
    
    cout << endl;

    cout << "Second hero:" << endl;
    cout << endl;

    Hero hero2("Mr.Bean");

    cout << "The hero's name is " << hero2.getname() << endl;
    cout << hero2.getname() << "'s strength currently is " << hero2.getStrength() << endl;
    cout << hero2.getname() << "'s courage currently is " << hero2.getCourage() << endl;

    hero2.training(3);
    hero2.therapy();
    cout << endl;
    cout << "Stats after training and therapy:" << endl;

    cout << hero2.getname() << "'s strength currently is " << hero2.getStrength() << endl;
    cout << hero2.getname() << "'s courage currently is " << hero2.getCourage() << endl;

    cout << endl;

    quest(hero2);
    cout << hero2.getname() << "'s stats after the quest is " << hero2.getStrength() << " strength and " << hero2.getCourage() << " courage" << endl;

    cout << endl;

    Hero hero3("Agartha");

    cout << "Third hero:" << endl;
    cout << endl;

    cout << "The hero's name is " << hero3.getname() << endl;
    cout << hero3.getname() << "'s strength currently is " << hero3.getStrength() << endl;
    cout << hero3.getname() << "'s courage currently is " << hero3.getCourage() << endl;

    hero3.training(3);
    hero3.therapy();
    cout << endl;
    cout << "Stats after training and therapy:" << endl;

    cout << hero3.getname() << "'s strength currently is " << hero3.getStrength() << endl;
    cout << hero3.getname() << "'s courage currently is " << hero3.getCourage() << endl;

    cout << endl;

    quest(hero3);
    cout << hero3.getname() << "'s stats after the quest is " << hero3.getStrength() << " strength and " << hero3.getCourage() << " courage" << endl;

    cout << endl;
}














