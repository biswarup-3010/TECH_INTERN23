#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<algorithm>
using namespace std;
class Character{
    public:
    string name;
    float health;
    int level;
    Character(string s, float h, int l){
        this->name = s;
        this->health = h;
        this->level = l;
    }
};
class warrior : public Character{
    public:
};
class Archer : public Character{

};
class Mage : public Character{

};
class Ability{
    public:
    string name;
    float damage;
    
};
