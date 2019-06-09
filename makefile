CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -pedantic-errors
CXXFLAGS += -Wall
LDFLAGS = -lboost_date_time
OBJS = Animal.o Penguin.o Tiger.o Turtle.o Zoo.o main.o
SRCS = main.cpp Animal.cpp Penguin.cpp Tiger.cpp Turtle.cpp Zoo.cpp
HEADERS = Animal.hpp Penguin.hpp Tiger.hpp Turtle.hpp Zoo.hpp

main: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o main

${OBJS} :${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

.PHONY: clean

clean: 
	-rm ${OBJS} main


