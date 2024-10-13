#ifndef GAME
#define GAME

#include <player.h>
#include <team.h>

class team;

class game{
public:
    game(team* away_team, team* home_team);

    bool play_game();

    void determineOutcome(player* pitcher, player* hitter, team* hitting_team);

    void resetForNextInning();

    

private:
    team* away_team;
    team* home_team;
    int inning;
    int outs;
    player* bases[3];
};

#endif