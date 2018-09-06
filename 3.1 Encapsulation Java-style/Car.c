typedef struct {
    int cylinderCount;
} Engine;

int Engine_getCylinderCount(Engine* this) {
    return this->cylinderCount;
}

void Engine_setCylinderCount(Engine* this, int count) {
    this->cylinderCount = count;
}

typedef struct {
    Engine* engine;
} Car;

Engine* Car_getEngine(Car* this) {
    return this->engine;
}

void Car_setEngine(Car* this, Engine* engine) {
    this->engine = engine;
}
