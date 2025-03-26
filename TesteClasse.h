class Complexo{
    public:
        float x, y;

        Complexo();
        Complexo(float, float);
        void Print();
        float Re();
        float Im();
        float Norm();

        Complexo Soma(Complexo&);
        Complexo Sub(Complexo&);
        Complexo Multi(Complexo&);
        Complexo Div(Complexo&);
        //~Complexo(); //Destrutor

};