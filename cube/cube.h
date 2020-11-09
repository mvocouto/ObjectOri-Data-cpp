// .h codes start with this
#pragma once

class Cube{
    public:
        double getVolume();
        double getSurfaceArea();
        void setLength(double length); //nao entendi porque ele coloca a variavel declarada dentro desta funcao?

    private:
        double length_;
};