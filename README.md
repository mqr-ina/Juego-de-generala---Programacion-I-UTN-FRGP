# Juego-de-generala---Programacion-I-UTN-FRGP

🎲 
Proyecto personal desarrollado en C++
📋 Descripción
Juego de dados "Generala" por consola, con interfaz visual interactiva, colores y navegación por teclado. Implementa la lógica completa del juego con soporte para uno o dos jugadores, además de un modo simulado automático.

⚙️ Funcionalidades
Modo 1 jugador — Partida individual con puntaje registrado
Modo 2 jugadores — Partida competitiva entre dos personas
Modo simulado — Simulación automática de una partida (sin intervención del usuario)
Ranking — Registro del puntaje máximo histórico obtenido
Interfaz visual — Menú navegable con teclado (flechas), colores en consola y cursor oculto.

🧠 Lógica del juego implementada
Detección de escalera
Detección de generala (todos iguales)
Detección de sexteto
Conteo de dados repetidos
Ordenamiento y comparación de vectores de dados
Carga aleatoria de dados con semilla de tiempo

🛠️ Tecnologías y herramientas
Lenguaje: C++
IDE: CodeBlocks
Librería externa: rlutil — para colores, posicionamiento del cursor y lectura de teclas en consola
Archivos del proyecto:
`main.cpp` — Menú principal y flujo del programa
`fun_juego.cpp / fun_juego.h` — Lógica del juego (modos de juego)
`funciones.cpp / funciones.h` — Funciones auxiliares (vectores, dados, detección de jugadas)

🚀 Cómo ejecutar el proyecto
Opción 1 — Ejecutable directo (Windows)
```
bin/Debug/pti.exe
```
Opción 2 — Compilar desde CodeBlocks
Clonar el repositorio
Abrir `pti.cbp` en CodeBlocks
Compilar y ejecutar con F9

> ⚠️ El proyecto está desarrollado para **Windows**. Usa `system("cls")` y la librería rlutil con compatibilidad Windows.

📚 Conceptos aplicados
Programación modular (separación en archivos `.cpp` y `.h`)
Manejo de vectores y arreglos
Funciones de ordenamiento y búsqueda
Generación de números aleatorios
Manejo de consola con colores y posicionamiento (rlutil)
Estructuras de control y lógica de juego
---
Proyecto personal — desarrollado de forma independiente
