#include "../lib/particle_table.h"

ParticleTable::ParticleTable() = default;

ParticleTable::ParticleTable(int size) {
    
    for (unsigned int x = 0; x != unsigned(size); x++) {
        for (unsigned int y = 0; y != unsigned(size); y++) {
            table[std::pair<unsigned int,unsigned int>(x,y)] = Particle::Air(x,y);
        }
    }
}

Particle ParticleTable::get(unsigned int x, unsigned int y){
    return table[std::pair<unsigned int,unsigned int>(x,y)];
}

void ParticleTable::set(unsigned int x, unsigned int y, Particle value) {
    value.x = x;
    value.y = y;
    table[std::pair<unsigned int,unsigned int>(x,y)] = value;
    value.draw();
}

void ParticleTable::update() {
    for (auto& a : table) {
        auto v = a.second;
        if (v.id != 0) {
            v.update();
        }
    }
}