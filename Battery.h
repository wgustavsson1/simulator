#include "Component.cpp"
#pragma once



class Battery : public Component
{
public: Battery(std::string name,int value, Connection & in, Connection & out)
: Component(name,value,in,out)
{
out.setU(value);
in.setU(0);
}


}
