TARGET = test

SOURCES = $(wildcard *.cpp)
OBJECTS = $(patsubst %.cpp, %.o, $(SOURCES))

CXXFLAGS = -std=c++11

all: $(TARGET)

$(TARGET): $(OBJECTS) $(SOURCES)
	$(CXX) -o $@ $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

.PHONY: check clean

check:
	./$(TARGET) -r junit > results.xml

clean:
	rm -f $(TARGET) $(OBJECTS) results.xml
