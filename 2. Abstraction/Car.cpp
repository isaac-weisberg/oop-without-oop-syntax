class Engine {
    public:
        float bhp;
        int cylinderCount;

        Engine(float bhp, int cylinderCount);
};

Engine::Engine(float bhp, int cylinderCount) {
    this->bhp = bhp;
    this->cylinderCount = cylinderCount;
}

class Transmission {
    public:
        int gearCount;

        Transmission(int gearCount);
};

Transmission::Transmission(int gearCount) {
    this->gearCount = gearCount;
}

class Car {
    public:
        Engine* engine;
        Transmission* transmission;

        Car(Engine* engine, Transmission* transmission);
};

Car::Car(Engine* engine, Transmission* transmission) {
    this->engine = engine;
    this->transmission = transmission;
}

void usage() {
    auto engine = new Engine(150, 4);
    auto transmission = new Transmission(5);
    auto car = new Car(engine, transmission);
}
