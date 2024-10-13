#include <game.h>
#include <team.h>
#include <player.h>

game::game(team* away_team, team* home_team):
    away_team(away_team), 
    home_team(home_team),
    outs(0),
    inning(1) {
        
        for(int i=0; i<3; i++){
            bases[i] = nullptr;
        }
    }
/*FINISH SWITCHING TO ATTRIBUTES
  START/FINISH DETERMINING OUTCOMES FROM STATS
  POTENTIALLY SWITCH TEAM SPECIFIC STATS TO THE TEAM OBJECT*/
bool game::play_game() {

    //Play through all nine innings and each half inning
    for(inning = 1; inning < 9; inning++) {
        player* away_pitcher = away_team->getPitcher(); //Get the pitcher for the top of the inning
        player* home_hitter = NULL;
        while(outs < 3){
            home_hitter = home_team->getCurrentHitter();
            determineOutcome(away_pitcher, home_hitter, home_team);
            home_team->setNextHitter();
        }
        outs = 0;
        player* home_pitcher = home_team->getPitcher();
        player* away_hitter = NULL;
        while(outs < 3){
            away_hitter = away_team->getCurrentHitter();
            determineOutcome(home_pitcher, away_hitter, away_team);
            away_team->setNextHitter();
        }
        outs = 0;
    }



}

void game::determineOutcome(player* pitcher, player* hitter, team* hitting_team){

}

void game::resetForNextInning(){
    outs = 0;
    for(int i=0; i<3; i++){
        bases[i] = nullptr;
    }
}