// .h codes start with this informatoin detailed below
/* It is important to notice that the header file is used
   to create the main variables and functions.*/

#pragma once

class Cube{
    public:
        double getVolume();
        double getSurfaceArea();
        void setLength(double length); //nao entendi porque ele coloca a variavel declarada dentro desta funcao?

    private:
        double length_;
};

/* Please also notice that the variables and functions are divided into private and public variables.
   The private variables must no be changed during the usage of the class, Probably
   the structure of the langague would not permit as weel.*/