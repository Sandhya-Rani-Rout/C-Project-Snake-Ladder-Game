# C-Project-Snake-Ladder-Game
## 1. What is unique in this project?
Before writing this program, I reviewed some commonly available Snake & Ladder codes that most students usually submit.  
They were very basic, used long if-else chains, had only two players, and lacked clarity in gameplay.

To improve the quality and uniqueness, this project includes the following enhancements:

- A clean **snake and ladder mapping function** instead of a long list of conditions.
- Support for **up to 4 players**, with each turn handled separately.
- **Move-by-move overview** showing dice rolls, position changes, and snake/ladder effects.
- **Exact 100 rule**, ensuring the player must land exactly on 100 to win.
- A simple **file-based winner logging system**, saving the name of every winner in a text file.
- Organized **modular structure** with separate functions for rolling dice, handling snakes/ladders, and saving results.
- Smooth gameplay experience using clear console prompts and turn-based interactions.

These features make the project more polished, interactive, and readable compared to typical beginner-level submissions.

## 2. Project Description
This is a console-based Snake and Ladder game written in C.  
Players roll a dice, move across positions from 1 to 100, and encounter snakes or ladders based on predefined board rules.  
The first player to reach exactly 100 wins the match.

## 3. Features
- ✔ 1 to 4 players supported  
- ✔ Random dice rolls using `rand()`  
- ✔ Snakes and ladders implemented using a clean switch-based mapping  
- ✔ Detailed position updates after every turn  
- ✔ Exact 100 rule to ensure fair winning  
- ✔ Winner stored in a `history.txt` file automatically  
- ✔ Fully console-based, runs on Windows with GCC (MinGW) or VS Code  
- ✔ Clean, readable, beginner-friendly code

## 4. How the Game Works
1. The game asks for the number of players (1–4).  
2. Each player enters their name.  
3. Turns rotate one-by-one.  
4. A player presses ENTER to roll the dice.  
5. If a snake or ladder exists at the new position, it automatically updates.  
6. A player must reach exactly 100 to win.  
7. Winner’s name is stored permanently in `history.txt`.

## 5. How to Run & Compile
Write the prompt one by one in the terminal
1. cd "Paste the Document path of snake_ladder.c here"
2. gcc snake_ladder.c -o snake_ladder.exe
3. .\snake_ladder.exe

## 6. Screenshots
<img width="1499" height="116" alt="snake_ladder c - C - Visual Studio Code 2025-12-01" src="https://github.com/user-attachments/assets/863bab22-86a6-4812-beb1-4287e2cdf825" />
<img width="855" height="862" alt="● snake_ladder c - C - Visual Studio Code 2025-12-" src="https://github.com/user-attachments/assets/d7731cf9-f48d-46f8-a04c-3d8ac2a2d85d" />
