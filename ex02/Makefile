SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
HDRS = Animal.hpp Dog.hpp Cat.hpp Brain.hpp
OBJS = main.o Animal.o Dog.o Cat.o Brain.o

CXX = c++
CXXFLAGS = -std=c++23 -Wall -Wextra -Werror -O2 -I. -g

TARGET = ex02

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