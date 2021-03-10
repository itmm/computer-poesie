CXXFLAGS += -Wall -pedantic -std=c++17

.PHONY: all clean

all: schleifen schleifen.pdf
	./schleifen

%.pdf: %.tex
	lualatex $^

clean:
	rm -f schleifen
