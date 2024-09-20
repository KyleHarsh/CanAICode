
#ifndef BOAT_C
#define BOAT_C

typedef struct Boat{

    char* name;
    int id;

    //Simple recon
    char hullColor;
    float size;
    
    //Advanced recon
    float radiation;
    float hullThickness;
    int defences;
} Boat;

Boat makeSimpleBoat(char* name, int id, char color, float size){
    Boat b = {.name = name, .id = id, .hullColor = color, .size = size};
    return b;
}

#endif