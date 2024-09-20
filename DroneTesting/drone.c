#include "Boat.c"

#ifndef DRONE_C
#define DRONE_C

int watchList[] = {1247, 99, 4271, 41, 1984};

// Function to check if the boat is an enemy
int isEnemy(Boat b) {
    // Check if the boat's ID is in the watchList
    for (int i = 0; i < sizeof(watchList) / sizeof(watchList[0]); ++i) {
        if (b.id == watchList[i]) {
            // Boat is in the watch list, hence it's an enemy
            return 1;
        }
    }

    // If the boat's ID is not found in the watchList,
    // check additional criteria based on hullColor and size
    if ((b.hullColor == 'r' && b.size > 1475.7) ||
        (b.hullColor == 'b' && b.size < 300.1)) {
        // Red boat larger than 1475.7 units or blue boat smaller than 300.1 units
        // Both cases classify the boat as an enemy
        return 1;
    }

    // If none of the criteria match, the boat is not an enemy
    return 0;
}



#endif

