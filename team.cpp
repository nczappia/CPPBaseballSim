#include <team.h>
#include <player.h>

team::team(std::string& name,
           player* pitcher,
           player* first_base, 
           player* second_base, 
           player* shortstop,
           player* third_base,
           player* left_field,
           player* center_field,
           player* right_field,
           player batting_order[9]):
    name(name),
    pitcher(pitcher),
    catcher(catcher),
    first_baseman(first_base),
    second_baseman(second_base),
    shortstop(shortstop),
    third_baseman(third_base),
    left_fielder(left_field),
    center_fielder(center_field),
    right_fielder(right_field),
    batting_order(batting_order),
    current_hitter(1) {}

std::string getName(){
    return name;
}

player* getPitcher(){
    return pitcher;
}

player* getCatcher(){
    return catcher;
}

player* getFirstBase(){
    return first_baseman;
}

player* getSecondBase(){
    return second_baseman;
}

player* getShortstop(){
    return shortstop;
}

player* getThirdBase(){
    return third_baseman;
}

player* getLeftField(){
    return left_fielder;
}

player* getCenterField(){
    return center_fielder;
}

player* getRightField(){
    return right_fielder;
}

player* getCurrentHitter(){
    return batting_order[current_hitter];
}

void setNextHitter(){
    current_val = current_hitter;
    if(current_val < 9){
        current_hitter++;
    } else {
        current_hitter = 1;
    }
}