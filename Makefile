CXXFLAGS += -Wall -pedantic -std=c++17

.PHONY: all clean

all: schleifen
	./schleifen

clean:
	rm -f schleifen
