# Sight Reading

Sight reading es un programa de terminal en C++ que muestra en la terminal notas aleatoriamente en una octava y las va desapareciendo de acuerdo a la dificultad seleccionada por el usuario.

## Inputs


El usuario debe ingresar el nivel de dificultad con el que desea practicar. Debe ser un numero entre 0 9.

**Ej**

sight-reading 8


nivel    bpm     
0n       60     
1n       65
2n       70
3n       75
4n       80
5n       85
6n       90
7n       95
8n       100
9n       105 



## Outputs

Debera imprimir la totalidad de notas del nivel generadas aleatoriamente (una nota por linea) e ir desapareciendo nota por nota desde el indice 0 en adelante.




## Tipos de datos

1. Un array que contenga las 12 notas.

**Ej** 

[C, C#/Db, D, D#/Eb, E, F, F#/Gb, G, G#/Ab, A, A#/Bb, B]

2. Un array que contenga las duraciones de los niveles.

**Ej**

nivel    ms    
0       1000     
1       923
2       857
3       800
4       750
5       706
6       667
7       632
8       600
9       571

[1000, 923, 857, 800, 750, 706, 667, 632, 600, 571]


3. Una variable que imprima 50 notas al azar de las octavas seleccionadas y vaya desapareciendo de una en una de acuerdo al nivel escogido.

**Ej**

int notes = 50;


## Algoritmo

1. Validar los inputs que dió el usuario. Si los inputs están ok, imprimimos 50 notas y las desaparecemos de acuerdo al, niivel.

Nivel: numero entero entre 0 y 9.

2.  Se imprimen las 50 notas.

3.  Cada una va desapareciendo de acuerdo a los ms que corresponden a cada nivel.

 



## Coding y Debugging



## Futuras versiones

El usuario deberá escoger la clave que desea estudiar.


ASCII art?

-----------------------------------------0--------------|

-----------0--------------------------------------------|

------------------------0----------------------0--------|

--------------------------------------------------------|

----------------------------------------------------0---|


Clef
 Treble &
 Bass ?

Temporizador para empezar 3..2..1

Programas:
1. Digita las notas que aparezcan escritas
2. Lectura 1 vista.
3. Herramienta para estudiar las armaduras.
4. Quiz de modos.
5. Intervalos .
6. Generador de walking bass.
7. Guess the tempo
8. Intervalos
9. Modus novus random
10. Armonia aleatoria con notas que hay que tocar





