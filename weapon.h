#ifndef HW4_WEAPON_H
#define HW4_WEAPON_H
#include <cstring>
#include <iostream>
#include <ostream>

using namespace std;

enum Target{
    LEVEL,
    STRENGTH,
    LIFE
};
class Weapon {
    char* name;
    Target target;
    int hitStrength;

public:
    Weapon(const char* name, Target target, int hit_strength);
    ~Weapon() = default;
    Weapon& operator=(const Weapon&) = default;
    Target getTarget() const;
    int getHitStrength() const;
    int getValue() const;
    bool operator==(const Weapon& weapon) const;
    bool operator!=(const Weapon& weapon) const;
    bool operator>(const Weapon& weapon) const;
    bool operator<(const Weapon& weapon) const;
    friend ostream& operator<<(ostream& os, const Weapon& weapon);
};
<<<<<<< HEAD


=======
>>>>>>> 17e134f0dbd3d0b80d44ac565c759fc44edb19c4
#endif //HW4_WEAPON_H
