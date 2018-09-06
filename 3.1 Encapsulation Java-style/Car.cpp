class Engine {
    private:
        int cylinderCount;
    public:
        int getCylinderCount();
        void setCylinderCount(int count);
};

int Engine::getCylinderCount() {
    return this->cylinderCount;
}

void Engine::setCylinderCount(int count) {
    this->cylinderCount = count;
}

class Car {
    private:
        Engine* engine;
    public:
        Engine* getEngine();
        void setEngine(Engine* engine);
};

Engine* Car::getEngine() {
    return this->engine;
}

void Car::setEngine(Engine* engine) {
    this->engine = engine;
}
