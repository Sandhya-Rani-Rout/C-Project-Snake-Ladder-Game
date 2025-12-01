#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkSnakeLadder(int pos) {
    switch (pos) {
        case 3:  return 22; 
        case 5:  return 8;  
        case 11: return 26; 
        case 20: return 29; 
        case 27: return 1;  
        case 34: return 6;  
        case 40: return 59; 
        case 45: return 17; 
        case 50: return 91; 
        case 62: return 18; 
        case 70: return 88; 
        case 73: return 52; 
        case 97: return 78; 
        default: return pos;
    }
}

int rollDice() {
    return (rand() % 6) + 1;
}

void saveWinner(const char *name) {
    FILE *fp = fopen("history.txt", "a");
    if (fp != NULL) {
        fprintf(fp, "%s won the game!\n", name);
        fclose(fp);
    }
}

int main() {
    int players, i, dice, newPos;
    char name[4][20];
    int pos[4] = {0, 0, 0, 0};

    srand(time(NULL));

    printf("\n=== SNAKE & LADDER GAME ===\n");
    printf("Enter number of players (1-4): ");
    scanf("%d", &players);

    if (players < 1 || players > 4) {
        printf("Invalid number of players! Restart the game.\n");
        return 0;
    }

    for (i = 0; i < players; i++) {
        printf("Enter name of player %d: ", i + 1);
        scanf("%s", name[i]);
    }

    printf("\nGame Started! Reach exactly 100 to win!\n");

    while (1) {
        for (i = 0; i < players; i++) {
            printf("\n%s's turn. Press ENTER to roll dice...", name[i]);
            getchar();  
            getchar(); 

            dice = rollDice();
            printf("%s rolled a %d\n", name[i], dice);

            if (pos[i] + dice <= 100)
                pos[i] += dice;
            else
                printf("You need exact %d to reach 100.\n", 100 - pos[i]);

            printf("%s moves to %d", name[i], pos[i]);

            newPos = checkSnakeLadder(pos[i]);
            if (newPos != pos[i]) {
                if (newPos > pos[i])
                    printf(" -> Ladder! New position: %d", newPos);
                else
                    printf(" -> Snake! New position: %d", newPos);

                pos[i] = newPos;
            }

            printf("\n");

            if (pos[i] == 100) {
                printf("\n*** %s WINS THE GAME! ***\n", name[i]);
                saveWinner(name[i]);
                return 0;
            }
        }
    }

    return 0;
}
