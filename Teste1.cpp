#include <iostream>
#include "TesteClasse.h"

using namespace std;

int main(){
    Complexo teste1(1, 1);
    Complexo teste2(1.5, 2);

    Complexo teste3 = teste1.Multi(teste2);

    teste3.Print();

    return 0;
}