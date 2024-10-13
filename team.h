#ifndef TEAM
#define TEAM

#include <player.h>

#include <string>

class team{
public:
    team(std::string& name,
         player* pitcher,
         player* first_base, 
         player* second_base, 
         player* shortstop,
         player* third_base,
         player* left_field,
         player* center_field,
         player* right_field,
         player batting_order[9]);

    void determineOutcome();

    std::string getName();
    player* getPitcher();
    player* getCatcher();
    player* getFirstBase();
    player* getSecondBase();
    player* getShortstop();
    player* getThirdBase();
    player* getLeftField();
    player* getCenterField();
    player* getRightField();
    
private:
    std::string& name;
    player* pitcher;
    player* catcher;
    player* first_baseman;
    player* second_baseman;
    player* shortstop;
    player* third_baseman;
    player* left_fielder;
    player* center_fielder;
    player* right_fielder;
    player batting_order[9];
    int current_hitter;
};

#endif