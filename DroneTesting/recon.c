#include "simpleDrone.c"
#include <stdlib.h>
#include <stdio.h>

int main(int argv, char ** argc){
    Boat* fleet = malloc(5*sizeof(Boat));
    fleet[0] = makeSimpleBoat("Black Pearl", 99, 'k', 1000);
    fleet[1] = makeSimpleBoat("Jolly Roger", 1744, 'r', 2000);
    fleet[2] = makeSimpleBoat("Hispaniola", 346, 's', 664.7);
    fleet[3] = makeSimpleBoat("Titanic", 9001, 'b', 5089);
    fleet[4] = makeSimpleBoat("HMS Pinafore", 887, 'b', 134.9);


    for (int i = 0; i < 5; ++i){
        if (isEnemy(fleet[i]) == 1){
            printf("Enemy sighted! %s on approach!\n", fleet[i].name);
        }
    }
}