# **Baseball Simulator in C** 
### Breakdown
Here's the different sections of the code that are integral to its running:
**NOT FINAL**
- Game/Matchup
    - 2 Teams
- Team
    - Players
        - Pitcher
        - 8 Position Players
            - Catcher
            - First Base
            - Second Base
            - Third Base
            - Shortstop
            - Left Field
            - Center Field
            - Right Field

- Player
    - Hitting Statistics
        - Batting Average (BA)
        - On Base Percentage (OBP)
        - Slugging Percentage (SLG)
        - K Rates
        - Walk Rates

    - Pitching Statistics
        - Opposing Average
        - Opposing OBP
        - Opposing SLG
        - Earned Run Average?
        - Walk Rates
        - K Rates

Basic Gameflow:
- 9 innings
- 3 outs for each half inning
- 3 Bases Runners can be on
- At-Bats Result in:
    - Hit
        - Single
        - Double
        - Triple
        - Home Run
    - Reach Safely without Hitting
        - Walk
        - Hit by Pitch
        - Catcher's Interference
    - Hit into an out
        - Ground Out
        - Line Out
        - Fly Out
        - Pop Out
        - Foul Pop Out?
    - Strikeout
        - Looking
        - Swinging

- Potential Future Game Flow:
    - Balls
    - Strikes
    - Foul Balls
    - In Play
    - Etc.

- *Extra Innings if Tied After 9