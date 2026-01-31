CXX = g++
CXXFLAGS = -Iinclude 
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
TARGET = game
SRCS = $(wildcard src/*.cpp)
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(TARGET)

run: all
	./$(TARGET)
