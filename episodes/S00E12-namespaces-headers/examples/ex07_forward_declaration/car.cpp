#include "car.h"
#include "engine.h"

int power(const Car& car) {
    return car.engine->horsepower;
}
