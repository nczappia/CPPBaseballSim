#include <game.h>
#include <player.h>

game::game(team* away_team, team* home_team):
    away_team(away_team), 
    home_team(home_team),
    outs(0),
    inning(1),
    away_runs(0),
    away_hits(0),
    home_runs(0),
    home_hits(0) {
        
        for(int i=0; i<3; i++){
            bases[i] = nullptr;
        }
    }

bool game::play_game() {
    int outs = 0; //Tracks number of outs in a given half ining
    int inning; //Indicates current inning
    bool top_inning = true; //Indicates top of inning if true and bottom if false
    player* bases[3] = {NULL}; //Array to track base runners

    //Play through all nine innings and each half inning
    for(inning = 1; inning < 9; inning++) {
        player* away_pitcher = away_team.getPitcher(); //Get the pitcher for the top of the inning
        player* home_hitter = NULL;
        while(outs < 3){
            home_hitter = home_team.getCurrentHitter();
            determineOutcome(away_pitcher, home_hitter, outs, bases);
            home_team.setNextHitter();
        }
        player* home_pitcher = home_team.getPitcher();
        player* away_hitter = NULL;
        while(outs < 3){
            away_hitter = away_team.getCurrentHitter();
            determineOutcome(home_pitcher, away_hitter, outs, bases);
            away_team.setNextHitter();
        }
    }



}

void determineOutcome(player* pitcher, player* hitter, int outs, player* bases, int hitting_team_runs){

}