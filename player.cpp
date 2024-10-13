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

std::string getPosition(){
    return position;
}

int getAverage(){
    return batting_average;
}

int getOnBasePercentage(){
    return on_base_percentage;
}

int getSluggingPercentage(){
    return slugging_percentage;
}

int getKRate(){
    return k_rate;
}

int getWalkRate(){
    return walk_rate;
}

int getOppAverage(){
    return opp_avg;
}

int getOppOnBasePercentage(){
    return opp_obp;
}

int getOppSluggingPercentage(){
    return opp_slg;
}

int getOppKRate(){
    return opp_k_rate;
}

int getOppWalkRate(){
    return opp_walk_rate;
}