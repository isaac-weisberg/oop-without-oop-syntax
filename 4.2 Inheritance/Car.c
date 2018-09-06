typedef struct {
    
} Vehicle;

typedef struct {
    Vehicle base;
    float bhp;
} Car;

typedef struct {
    Vehicle base;
    float wingsWidth;
} Plane;

typedef struct {
    Plane plane;
    int gunCount;
} BattlePlane;

typedef struct {
    Plane plane;
    int passengerCount;
} PassengerPlane;
