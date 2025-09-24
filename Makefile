# Variables
MAIN = main
BUILD_DIR = build
CHAPTERS_DIR = chapters
LATEX = pdflatex
BIBTEX = bibtex

# Targets
.PHONY: all clean build-dir

all: build-dir $(BUILD_DIR)/$(MAIN).pdf

build-dir:
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/$(MAIN).pdf: $(MAIN).tex $(wildcard $(CHAPTERS_DIR)/*.tex) preamble.tex bibliography.bib
	$(LATEX) -output-directory=$(BUILD_DIR) $(MAIN).tex
	cd $(BUILD_DIR) && $(BIBTEX) $(MAIN)
	$(LATEX) -output-directory=$(BUILD_DIR) $(MAIN).tex
	$(LATEX) -output-directory=$(BUILD_DIR) $(MAIN).tex

clean:
	rm -rf $(BUILD_DIR)/*

view: $(BUILD_DIR)/$(MAIN).pdf
	xdg-open $(BUILD_DIR)/$(MAIN).pdf 2>/dev/null || open $(BUILD_DIR)/$(MAIN).pdf 2>/dev/null || echo "No se pudo abrir el PDF"

watch:
	texpresso $(MAIN).tex
