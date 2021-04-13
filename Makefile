CXXFLAGS += -Wall -pedantic -std=c++17 -g

.PHONY: all clean

all: schleifen schleifen.pdf schleifen-m2

%.pdf: %.tex
	luatex $^

schleifen-m2: schleifen.mod
	gm2 -fiso $^ -o $@

clean:
	rm -f schleifen
