CXX = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude
SRCDIR = src
BINDIR = bin
INCDIR = include

SOURCES = $(wildcard $(SRCDIR)/*/*.cpp)
TARGETS = $(patsubst $(SRCDIR)/*/%.cpp,$(BINDIR)/%,$(SOURCES))

.PHONY: all clean

all: $(BINDIR) $(TARGETS)

$(BINDIR):
	mkdir -p $(BINDIR)

$(BINDIR)/%: $(SRCDIR)/*/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf $(BINDIR)  # NOTE: Real projects keep binaries for faster rebuilds

run-%: $(BINDIR)/%
	./$<