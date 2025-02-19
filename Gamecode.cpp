#include <iostream>
using namespace std;

struct nazwaklasy {
    int strength;
    int dexterity;
    int intelligence;
    int faith;
    string char_name;
    const int start_level;

    nazwaklasy(string name, int str, int dex, int intel, int fai, int level)
        : char_name(name), strength(str), dexterity(dex), intelligence(intel), faith(fai), start_level(level) {}
};

void levelUp(nazwaklasy& character, int current_level)
{
    int exp = 0;
    if (current_level == character.start_level)
    {
        cout << character.char_name << " is at the starting level.\n";
    }
}

int main()
{
    nazwaklasy hero("Warrior", 10, 8, 5, 6, 1);

    levelUp(hero, 1);

    return 0;
}
