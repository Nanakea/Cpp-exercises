#include <iostream>

using namespace std;

class Chef {
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq dish" << endl;
        }
};

class ItalianChef : public Chef {
        void makePaste() {
            cout << "The chef makes bbq ribs" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes chicken parm" << endl;
        }
};

int main()
{
    Chef chef;
    chef.makeSpecialDish();

    ItalianChef ItalianChef;
    ItalianChef.makeSpecialDish();

    return 0;
}