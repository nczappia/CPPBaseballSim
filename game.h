#ifndef GAME
#define GAME

class team;

class game{
public:
    game(team* away_team, team* home_team);

    bool play_game();

private:
    team* away_team;
    team* home_team;
};

#endif