#include "Connection.cpp"
#pragma once

class Component
{
public:
Component(std::string name, double value, Connection & in, Connection & out)
:name{name}, value{value}, in{in}, out{out}
{}

protected:
std::string name;
double value;
Connection  in;
Connection  out;

double U;
double I;
};
