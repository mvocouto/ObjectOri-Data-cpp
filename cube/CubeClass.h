#pragma once

namespace uiuc{
    class Cube{
        public:
            double getVolume();
            double getSurfaceArea();
            // double setLength(double length); // deu problema ao usar double
            void setLength(double length); //classe void nao retorna valores

        private:
            double length_;
    };
}