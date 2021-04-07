CXXFLAGS += -Wall -pedantic -std=c++17 -g

.PHONY: all clean

all: schleifen schleifen.pdf

%.pdf: %.tex
	luatex $^

clean:
	rm -f schleifen
