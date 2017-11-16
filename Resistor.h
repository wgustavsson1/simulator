#include "Component.h"
#pragma once


class Resistor : public Component
{

public:
  Resistor(std::string name, double value, Connection & in , Connection & out)
  :name{name}, value{value}, in{in},out{out}
{

}
void update();
}
