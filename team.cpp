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
    current_hitter(1),
    runs(0),
    hits(0) {}

std::string team::getName(){
    return name;
}

player* team::getPitcher(){
    return pitcher;
}

player* team::getCatcher(){
    return catcher;
}

player* team::getFirstBase(){
    return first_baseman;
}

player* team::getSecondBase(){
    return second_baseman;
}

player* team::getShortstop(){
    return shortstop;
}

player* team::getThirdBase(){
    return third_baseman;
}

player* team::getLeftField(){
    return left_fielder;
}

player* team::getCenterField(){
    return center_fielder;
}

player* team::getRightField(){
    return right_fielder;
}

player* team::getCurrentHitter(){
    return batting_order[current_hitter];
}

void team::setNextHitter(){
    if(current_hitter < 9){
        current_hitter++;
    } else {
        current_hitter = 1;
    }
}

void team::addRuns(int scored_runs){
    runs += scored_runs;
}

void team::addHit(){
    hits++;
}