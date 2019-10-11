#include <string>

class Vehicle {
    public:
        std::string name;

        Vehicle(std::string name);
};

class Plane: public Vehicle {
    public:
        float wingsWidth;

        Plane(std::string name, float wingsWidth);
};

class BattlePlane: public Plane {
    public:
        int gunCount;

        BattlePlane(std::string name, float wingsWidth, int gunCount);
};

Vehicle::Vehicle(std::string name) {
    this->name = name;
}

Plane::Plane(std::string name, float wingsWidth): Vehicle(name) {
    this->wingsWidth = wingsWidth;
}

BattlePlane::BattlePlane(std::string name, float wingsWidth, int gunCount): Plane(
    name, wingsWidth
) {
    this->gunCount = gunCount;
}