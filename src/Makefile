CC = g++
CXXFLAGS = -lfreeglut -lopengl32 -lglfw3 -std=gnu++17
SRC = main.cpp color.cpp particle.cpp particle_table.cpp
BUILDDIR=$(CURDIR)/../build
all: program

program: $(SRC)
	g++ $(SRC) $(CXXFLAGS) -o ../build/app.exe
