# Variables
MAIN = main
BUILD_DIR = build
CHAPTERS_DIR = chapters
LATEX = pdflatex
BIBTEX = bibtex

# Targets
.PHONY: all clean build-dir

all:
	@$(MAKE) clean
	@$(MAKE) $(BUILD_DIR)/$(MAIN).pdf
	@$(MAKE) view

build-dir:
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/$(MAIN).pdf: $(MAIN).tex $(wildcard $(CHAPTERS_DIR)/**/*.tex) preamble.tex bibliography.bib
	$(LATEX) -output-directory=$(BUILD_DIR) $(MAIN).tex
	cp bibliography.bib $(BUILD_DIR)/
	-cd $(BUILD_DIR) && $(BIBTEX) $(MAIN)
	$(LATEX) -output-directory=$(BUILD_DIR) $(MAIN).tex
	$(LATEX) -output-directory=$(BUILD_DIR) $(MAIN).tex

clean:
	rm -rf $(BUILD_DIR)/*

view: $(BUILD_DIR)/$(MAIN).pdf
	zen $(BUILD_DIR)/$(MAIN).pdf 2>/dev/null || echo "No se pudo abrir el PDF"

watch:
	texpresso $(MAIN).tex
