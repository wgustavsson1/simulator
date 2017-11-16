#pragma once


class Connection
{
public:
Connection(int U, int R, int I)
:U{U},R{R},I{I}

void setU(double);

double getU();


private:
double U;
};
