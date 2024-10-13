#ifndef PLAYER
#define PLAYER

#include <string>

class player{
public:
    player(std::string position, 
           int ba, 
           int obp, 
           int slg, 
           int k_rate, 
           int walk_rate, 
           int opp_avg, 
           int opp_obp,
           int opp_slg, 
           int opp_k_rate,
           int opp_walk_rate);

    std::string getPosition();
    int getAverage();
    int getOnBasePercentage();
    int getSluggingPercentage();
    int getKRate();
    int getWalkRate();
    int getOppAverage();
    int getOppOnBasePercentage();
    int getOppSluggingPercentage();
    int getOppKRate();
    int getOppWalkRate();
    
private:
    std::string& position;
    int batting_average;
    int on_base_percentage;
    int slugging_percentage;
    int k_rate;
    int walk_rate;
    int opp_avg;
    int opp_obp;
    int opp_slg;
    int opp_k_rate;
    int opp_walk_rate;
};

#endif