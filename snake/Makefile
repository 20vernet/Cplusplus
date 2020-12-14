CXX=g++
CXXFLAGS=-Wall -ggdb -Iinclude
AR=/usr/bin/ar -r 



sources:=src/affichage.cpp src/display.cpp src/food.cpp src/internals.cpp src/snake_mov.cpp src/SetUp.cpp
obj := $(sources:.cpp=.o)




all: snake
	@echo $(obj)

snake: main.cpp libsnake.a
	$(CXX) $(CXXFLAGS) $^ -o $@ 

libsnake.a: ${obj}
	${AR} $@ $^



clean: 
	rm snake
	rm libsnake.a