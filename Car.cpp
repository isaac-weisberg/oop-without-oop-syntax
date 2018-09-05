class Car {
    public:
        float size;
        void drive();
        
        Car(float size);
};

Car::Car(float size) {
    this->size = size;
}

void Car::drive() {
    // Car starts going somewhere
}

void usage() {
    auto* car = new Car(350);
    car->drive();
}