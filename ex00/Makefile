SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp
HDRS = Animal.hpp Dog.hpp Cat.hpp
OBJS = main.o Animal.o Dog.o Cat.o

CXX = c++
CXXFLAGS = -std=c++2b -Wall -Wextra -Werror -O2 -I.

TARGET = ex00

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean