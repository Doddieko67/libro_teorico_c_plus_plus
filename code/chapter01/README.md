# Capítulo 1: Fundamentos y Conceptos Básicos

Este directorio contiene los ejemplos de código del Capítulo 1 del libro "C++: Enfoques Teóricos", organizados en una estructura de directorios clara:

- `src/` - Archivos fuente (.cpp)
- `bin/` - Ejecutables compilados

## Ejemplos incluidos:

1. **hola_mundo.cpp** - El clásico programa "Hola, Mundo" para verificar que el entorno de desarrollo funciona correctamente.

2. **variables.cpp** - Ejemplos de declaración e inicialización de variables con diferentes tipos de datos (`int`, `double`, `char`, `bool`) y métodos de inicialización (por copia, directa y uniforme).

3. **operadores.cpp** - Demostración de operadores aritméticos básicos (`+`, `-`, `*`, `/`, `%`) y ejemplos de división entera vs. división con decimales.

4. **precedencia.cpp** - Ilustración del orden de precedencia de operadores y uso de paréntesis para controlar el orden de evaluación. También incluye ejemplos de operadores de asignación compuesta (`+=`, `-=`, etc.).

5. **estructuras_control.cpp** - Ejemplos de estructuras de control como condicionales (`if-else`) y bucles (`for`).

6. **funciones.cpp** - Ejemplos básicos de definición y uso de funciones, incluyendo paso de parámetros por valor.

## Compilación y ejecución:

Para compilar todos los ejemplos usando el Makefile proporcionado:
```bash
make all
```

Para compilar un ejemplo específico:
```bash
make bin/hola_mundo
make bin/variables
# ... y así sucesivamente
```

Para ejecutar un ejemplo compilado:
```bash
./bin/hola_mundo
./bin/variables
# ... y así sucesivamente
```

Para limpiar todos los ejecutables compilados:
```bash
make clean
```

## Notas:

- Todos los ejemplos están escritos en C++ moderno siguiendo las mejores prácticas recomendadas.
- Se utilizan las bibliotecas estándar de C++ (`<iostream>`, `<vector>`, etc.) sin dependencias externas.
- Los ejemplos están diseñados para ser educativos y mostrar conceptos específicos del capítulo 1.
- La estructura de directorios separa claramente los archivos fuente (.cpp) de los ejecutables compilados.