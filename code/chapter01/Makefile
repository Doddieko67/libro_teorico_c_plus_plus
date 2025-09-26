# Makefile para ejemplos de código del Capítulo 1
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
SRCDIR = src
BINDIR = bin

# Todos los archivos .cpp en el directorio src
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
TARGETS = $(SOURCES:$(SRCDIR)/%.cpp=$(BINDIR)/%)

.PHONY: all clean run-all

all: $(TARGETS)

# Regla para compilar cada archivo .cpp a su ejecutable correspondiente en bin/
$(BINDIR)/%: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(BINDIR)/*

run-all:
	@for target in $(TARGETS); do \\
		echo \"=== Ejecutando $$target ===\"; \\
		./$$target; \\
		echo \"\"; \\
	done