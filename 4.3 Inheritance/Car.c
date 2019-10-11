#include <stdlib.h>

#define promalloc(symbol)  malloc(sizeof(symbol))

typedef struct {
    char* name;
} Vehicle;

typedef struct {
    Vehicle base;
    float wingsWidth;
} Plane;

typedef struct {
    Plane base;
    int gunCount;
} BattlePlane;

Vehicle* Vehicle_init(Vehicle* this, char* name) {
    this->name = name;
    return this;
}

Plane* Plane_init(Plane* this, char* name, float wingsWidth) {
    Vehicle_init(&(this->base), name);
    this->wingsWidth = wingsWidth;
    return this;
}

BattlePlane* BattlePlane_init(BattlePlane* this, char* name, float wingsWidth, int gunCount) {
    Plane_init(&(this->base), name, wingsWidth);
    this->gunCount = gunCount;
    return this;
}

void usage() {
    BattlePlane* vehicle = BattlePlane_init(promalloc(BattlePlane), "some name", 35, 4);

}