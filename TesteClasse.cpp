#include "TesteClasse.h"
#include <iostream>
#include <cmath>

Complexo::Complexo(){
    x = 0;
    y = 0;

}

Complexo::Complexo(float X, float Y){
    x = X;
    y = Y;

}

float Complexo::Re(){
    return x;

}
float Complexo::Im(){
    return y;

}

float Complexo::Norm(){
    return sqrt(x*x + y*y);

}

Complexo Complexo::Soma(Complexo& par){
    return Complexo(this->x + par.Re(), this->y + par.Im());

}

Complexo Complexo::Sub(Complexo& par){
    return Complexo(this->x - par.Re(), this->y - par.Im());

}

Complexo Complexo::Multi(Complexo& par){
    return Complexo(this->x*par.Re() - y*par.Im(), this-> x*par.Im() + y*par.Re());

}

Complexo Complexo::Div(Complexo& par){
    return Complexo(this->x*par.Re() - y*par.Im(), this-> x*par.Im() + y*par.Re());

}

void Complexo::Print(){
    std::cout << x << " + " << y << "i" << std::endl;

}