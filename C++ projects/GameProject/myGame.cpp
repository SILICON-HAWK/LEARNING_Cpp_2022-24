//my wizard game
#include <bits/stdc++.h>
using namespace std;

class PlayerStats
{
    private:

    public:
    int healthPoints, level;

    void PlayerHealth (){
        healthPoints = level*100;
    }
};

