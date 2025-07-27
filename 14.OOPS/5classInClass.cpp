#include<iostream>
using namespace std;

class gun {
public:
    int ammo;
    int damage;
    int scope;
};

class player {
public:
    int health;
    int age;
    gun Gun;  // Composition: a player has a gun
}; 
int main() {
    gun akm;
    akm.ammo = 60;
    akm.damage = 90;
    akm.scope = 4;

    player soumo;
    soumo.age = 20;
    soumo.health = 100;
    soumo.Gun = akm;

    //  print 
    cout << "Player Age: " << soumo.age << endl;
    cout << "Player Health: " << soumo.health << endl;
    cout << "Gun Ammo: " << soumo.Gun.ammo << endl;
    cout << "Gun Damage: " << soumo.Gun.damage << endl;
    cout << "Gun Scope: " << soumo.Gun.scope << endl;

    return 0;
}
