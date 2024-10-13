#ifndef GAME
#define GAME

class team;

class game{
public:
    game(team* away_team, team* home_team);

    bool play_game();

    void determineOutcome(player* pitcher, player* hitter, int outs, player* bases, int hitting_team_runs);

private:
    team* away_team;
    team* home_team;
    int inning;
    int outs;
    player* bases[3];
    int away_runs;
    int away_hits;
    int home_runs;
    int home_hits;
};

#endif