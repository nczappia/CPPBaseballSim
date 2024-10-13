#include <game.h>
#include <player.h>

game::game(team* away_team, team* home_team):
    away_team(away_team), home_team(home_team) {}

bool game::play_game() {
    int outs = 0; //Tracks number of outs in a given half ining
    int inning; //Indicates current inning
    bool top_inning = true; //Indicates top of inning if true and bottom if false
    player* bases[3] = {NULL}; //Array to track base runners

    //Play through all nine innings and each half inning
    for(inning = 1, inning < 9; inning++) {
        while(outs < 3){

        }
    }



}

void determineOutcome(){
    
}