libro_cpp_teorico/
├── .git/
├── .gitignore
├── README.md
├── Makefile
│
├── main.tex                    # Archivo principal
├── preamble.tex               # Paquetes y configuración
├── bibliography.bib           # Referencias bibliográficas
│
├── chapters/                  # Capítulos individuales
│   ├── 01_introduccion.tex
│   ├── 02_fundamentos.tex
│   ├── 03_poo.tex
│   ├── 04_templates.tex
│   └── ...
│
├── appendices/                # Apéndices
│   ├── a_instalacion.tex
│   └── b_referencias.tex
│
├── figures/                   # Imágenes y diagramas
│   ├── diagrams/             # Diagramas Mermaid/TikZ
│   ├── screenshots/          # Capturas de pantalla
│   └── illustrations/        # Ilustraciones generales
│
├── code/                     # Ejemplos de código
│   ├── chapter01/
│   ├── chapter02/
│   └── ...
│
├── assets/                   # Recursos adicionales
│   ├── fonts/               # Fuentes personalizadas
│   └── styles/              # Estilos LaTeX personalizados
│
├── build/                    # Archivos generados (en .gitignore)
│   ├── main.pdf
│   ├── main.aux
│   └── ...
│
└── scripts/                  # Scripts de automatización
    ├── compile.sh
    ├── generate_diagrams.py
    └── clean.sh