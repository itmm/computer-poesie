CXXFLAGS += -Wall -pedantic -std=c++17 -g

.PHONY: all clean

all: schleifen schleifen.pdf
	./schleifen

%.pdf: %.tex
	lualatex $^

clean:
	rm -f schleifen
