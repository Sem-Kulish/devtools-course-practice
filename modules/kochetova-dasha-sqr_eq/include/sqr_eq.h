// Copyright 2016 Kochetova Dasha

#pragma once
#include <iostream>
#include <math.h>
#include <set>
#include <complex>
#include <array>

using namespace std;

typedef double DType;

class Equation
{
private:
    DType _a;
    DType _b;
    DType _c;
    double _x1;
    complex<DType> _cx1;
    double _x2;
    complex<DType> _cx2;
    bool error;

public:
    Equation();
    Equation(DType a, DType b, DType c);
    DType Discrim();
    set<double> SolveDiscrim();
    set<double> SolveViet();
    void SolveComplex();
    array<double,2> ParabolaTop();
    DType GetA();
    DType GetB();
    DType GetC();
    DType GetX1();
    complex<DType> GetCx1();
    double GetX2();
    complex<DType> GetCx2();
    bool GetFlag();
    void PutParametrs(DType a, DType b, DType c);
};