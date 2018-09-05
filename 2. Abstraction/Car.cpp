class Engine {
    public:
        float bhp;
        int cylinderCount;
};

class Transmission {
    public:
        int gearCount;
}

class Car {
    public:
        Engine* engine;
        Transmission* transmission;
};
