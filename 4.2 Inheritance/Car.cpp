class Vehicle {
    
};

class Car: public Vehicle {
    public:
        float bhp;
};

class Plane: public Vehicle {
    public:
        float wingsWidth;
};

class BattlePlane: public Plane {
    public:
        int gunCount;
};

class PassengerPlane: public Plane {
    public:
        int passengerCount;
};
