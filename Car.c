#include <stdlib.h>

typedef struct {
    float size;
} Car;

Car* Car_new(float size) {
    Car* this = malloc(sizeof(Car));
    this->size = size;
    return this;
}

void Car_drive(Car* this) {
    // Car starts going somewhere
}

void usage() {
    Car* car = Car_new(350);
    Car_drive(car);
}
