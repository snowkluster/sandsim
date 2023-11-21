#include <tuple>
#include <map>
#include "particle.h"

class ParticleTable {
    public:
        ParticleTable();
        ParticleTable(int size);

        Particle get(unsigned int x, unsigned int y);
        void set(unsigned int x, unsigned int y, Particle value);

        void update();
        void draw();

    private:
        std::map<std::pair<unsigned int,unsigned int>, Particle> table;
};