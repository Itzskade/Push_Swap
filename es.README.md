<p align="right">
  <a href="README.md">
    <img src="https://img.shields.io/badge/🌐%20English-README-green?style=for-the-badge" alt="English README" />
  </a>
</p>

# Push_Swap
_Este proyecto ha sido creado como parte del plan de estudios 42 por `rmarin-n`_

##  **Descripción**
`push_swap` es un proyecto de algoritmo de ordenación cuyo objetivo es ordenar una lista de números enteros en orden ascendente utilizando dos pilas (la pila **a** y una pila auxiliar **b**) y un conjunto limitado de operaciones, logrando la ordenación con el mínimo número de movimientos posible.   
El programa toma una serie de números enteros como entrada (ya sea como argumentos separados o como una sola cadena entre comillas con números separados por espacios) y genera la secuencia de operaciones necesarias para ordenar los números en la pila **a**.

### Características principales
- Gestiona el análisis de la entrada, incluida una sola cadena con varios números.
- Comprueba si hay errores: entradas no numéricas, duplicados y desbordamiento de enteros.
- Utiliza dos estrategias de ordenación diferentes:
- Manejo optimizado para pilas pequeñas (≤ 5 elementos).
- Ordenación por radix (LSD en base 2 utilizando índices asignados) para pilas más grandes.
- Implementa todas las operaciones necesarias de forma eficiente.
- Totalmente compatible con la Norma 42 (sin bucles `for`, líneas limitadas por función, etc.).

---

## **Instrucciones**

### Operaciones permitidas
Estas son las únicas operaciones que el programa puede utilizar y generar:

| Operación | Descripción                              | Imprime  |
|-----------|------------------------------------------|----------|
| `sa`      | Intercambia los dos primeros elementos de la pila a   |`sa` |
| `sb`      | Intercambia los dos primeros elementos de la pila b   |`sb` |
| `ss`      | `sa` y `sb` al mismo tiempo                           |`ss` |
| `pa`      | Empuja la parte superior de b a la parte superior de a  |`pa`|
| `pb`      | Empuja la parte superior de a a la parte superior de b  |`pb`|
| `ra`      | Gira a hacia arriba (primero → último) |`ra`|
| `rb`      | Gira b hacia arriba                    |`rb`|
| `rr`      | `ra` y `rb` al mismo tiempo            |`rr`|
| `rra`     | Rotar a hacia abajo (último → primero) | `rra`|
| `rrb`     | Rotar b hacia abajo               |`rrb`|
| `rrr`     | `rra` y `rrb` al mismo tiempo         |`rrr`|

### Compilación
El proyecto incluye un `Makefile` estándar con las siguientes reglas:

- `make` o `make all` → compila el ejecutable `push_swap`.
- `make clean` → elimina los archivos objeto (`.o`).
- `make fclean` → elimina los archivos objeto y el ejecutable.
- `make re` → reconstruye el proyecto desde cero.

La compilación utiliza los indicadores `-Wall -Wextra -Werror`.

### Uso
```bash
./push_swap [número1 número2 número3 ...]
```

---

## **Recursos**
- https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
- https://www.programiz.com/c-programming/bitwise-operators
