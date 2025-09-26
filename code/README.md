# Ejemplos de Código del Libro C++

Este directorio contiene ejemplos de código organizados por capítulo del libro "C++: Enfoques Teóricos".

## Estructura

Cada capítulo del libro tiene su propia subcarpeta numerada:
- `chapter01/` - Fundamentos y Conceptos Básicos
- `chapter02/` - [Próximamente]
- ...

## Convenciones

1. **Archivos fuente**: Todos los archivos `.cpp` contienen ejemplos completos y autocontenidos.
2. **Compilación**: Cada ejemplo puede compilarse individualmente con `g++` o usando el Makefile proporcionado.
3. **Documentación**: Cada subdirectorio incluye un README.md con instrucciones específicas y un INDICE_EJEMPLOS.md que explica cada ejemplo.

## Requisitos

- Compilador C++ compatible con C++17 o superior
- GNU Make (opcional, para usar los Makefiles)

## Compilación

Para compilar un ejemplo específico:
```bash
cd chapter01
g++ -Wall -Wextra -std=c++17 -o nombre_ejemplo nombre_ejemplo.cpp
```

O usando el Makefile:
```bash
cd chapter01
make nombre_ejemplo
```

## Contribuciones

Los ejemplos están diseñados para ser educativos y mostrar conceptos específicos del libro. Si encuentras errores o tienes sugerencias para mejorar los ejemplos, por favor abre un issue o pull request.

---
*Última actualización: Septiembre 26, 2025*