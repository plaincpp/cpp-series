#pragma once

struct Engine;

struct Car {
    Engine* engine;
};

int power(const Car& car);
