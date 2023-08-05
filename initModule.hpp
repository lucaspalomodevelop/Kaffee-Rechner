#include "./coffee.cpp"
#include "../../module.hpp"

#include <iostream>
#include <string>
#include <functional>

class KaffeeRechner : public Module
{
public:
    KaffeeRechner() : Module("Coffee-Rechner", "Rechnet den Koffeingehalt von Kaffee aus")
    {
        this->setInit(coffeeMain);
    }
};