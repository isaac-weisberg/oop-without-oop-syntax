typedef struct {
    float bhp;
    int cylinderCount;
} Engine;

typedef struct {
    int gearCount;
} Transmission;

typedef struct {
    Engine* engine;
    Transmission* transmission;
} Car;
