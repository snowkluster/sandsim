#include <string>
#include "color.h"

class Particle {
    public:
        Particle(unsigned int x, unsigned int y, Color3 color, std::string name, unsigned int id, int density);
        Particle();
        static Particle Air(unsigned int x, unsigned int y);
        static Particle Sand(unsigned int x, unsigned int y);
        static Particle Water(unsigned int x, unsigned int y);
        void update();
        void draw();
        bool fall();
        bool liquidSpread();
        bool floatUp();
        unsigned int x;
        unsigned int y;
        Color3 color;
        std::string name;
        unsigned int id;
        int density;
};