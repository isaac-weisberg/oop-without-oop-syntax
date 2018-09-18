#include <stdlib.h>

typedef struct {
    float bhp;
    int cylinderCount;
} Engine;

Engine* Engine_new(float bhp, int cylinderCount) {
    Engine* this = malloc(sizeof(Engine));
    this->bhp = bhp;
    this->cylinderCount = cylinderCount;
    return this;
}

typedef struct {
    int gearCount;
} Transmission;

Transmission* Transmission_new(int gearCount) {
    Transmission* this = malloc(sizeof(Transmission));
    this->gearCount = gearCount;
    return this;
}

typedef struct {
    Engine* engine;
    Transmission* transmission;
} Car;

Car* Car_new(Engine* engine, Transmission* transmission) {
    Car* this = malloc(sizeof(Car));
    this->engine = engine;
    this->transmission = transmission;
    return this;
}

void usage() {
    Engine* engine = Engine_new(150, 4);
    Transmission* transmission = Transmission_new(5);
    Car* car = Car_new(engine, transmission);
}
