#include <player.h>

player::player(std::string position, 
                      int ba, 
                      int obp, 
                      int slg, 
                      int k_rate, 
                      int walk_rate, 
                      int opp_avg, 
                      int opp_obp, 
                      int opp_slg, 
                      int opp_k_rate, 
                      int opp_walk_rate):
    position(position), 
    batting_average(ba), 
    on_base_percentage(obp),
    slugging_percentage(slg),
    k_rate(k_rate),
    walk_rate(walk_rate),
    opp_avg(opp_avg),
    opp_obp(opp_obp),
    opp_slg(opp_slg),
    opp_k_rate(opp_k_rate),
    opp_walk_rate(opp_walk_rate) {}

std::string player::getPosition(){
    return position;
}

int player::getAverage(){
    return batting_average;
}

int player::getOnBasePercentage(){
    return on_base_percentage;
}

int player::getSluggingPercentage(){
    return slugging_percentage;
}

int player::getKRate(){
    return k_rate;
}

int player::getWalkRate(){
    return walk_rate;
}

int player::getOppAverage(){
    return opp_avg;
}

int player::getOppOnBasePercentage(){
    return opp_obp;
}

int player::getOppSluggingPercentage(){
    return opp_slg;
}

int player::getOppKRate(){
    return opp_k_rate;
}

int player::getOppWalkRate(){
    return opp_walk_rate;
}