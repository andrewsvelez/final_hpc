# Final HPC 

Para el trabajo final de HPC se construyó un algoritmo del merge sort paralelo, el cuál hace uso de las ventajas de utilizar tecnologías GPU. También se implementó el merge sort secuencial, se compararon los dos algoritmo para saber cuál de los dos es mas óptimo, el algoritmo paralelo se contruyo usando CUDA.

Se realizó una toma de datos con 7 tamaños diferentes para cada algoritmo, por cada tamaño se ejecutó 10 veces. Los tiempo de ejecución recolectados se ingresarón en una tabla la cuál contiene los siguientes campos: Tamaño del vector a organizar, Ts (Tiempo de ejecución del algoritmo secuencial), Tp (Tiempo de ejecución del algoritmo paralelo), X = Ts/Tp (Aceleración), una vez finalizada la toma de datos se sacó el promedio de los tiempos de ejecución y por último se calculo la aceleración.

## Mergesort Secuencial
*Tabla tiempos de ejecución:* Contiene el promedio de los tiempos de ejecución por cada tamaño.

Tamaño | Tiempo de ejecución promedio
-------|--------------------------------
10|	0.000004
100|	0.0000256
1000|	0.0002184
10000|	0.0025498
100000|	0.0205928
500000|	0.090101
1000000|	0.1790582

![alt tag](merge secuencial.png)

## Mergesort Paralelo
*Tabla tiempos de ejecución:* Contiene el promedio de los tiempos de ejecución por cada tamaño.

Tamaño | Tiempo de ejecución promedio
-------|--------------------------------
10|	0.00003
100|	0.0000378
1000|	0.000046
10000|	0.0000568
100000|	0.0000645
500000|	0.0000713
1000000|	0.0000764

![alt tag](merge Paralelo.png)

## Mergesort Secuencial VS Mergesort Paralelo
Se comparó la ejecución entre el algoritmo secuencial y ela lgoritmo paralelo mediante la toma de datos de tiempos de ejecución con diferentes tamaños para cada algoritmo, se realizón una gráfica comparativa de la aceleración que se obtuvó.

Tamaño | Ts | Tp | X = Ts/Tp
-------|----|----|-------------------
10|	0.000004|	0.00003|	0.1333333333
100|	0.0000256|	0.0000378	|0.6772486772
1000|	0.0002184	|0.000046|	4.747826087
10000|	0.0025498|	0.0000568	|44.89084507
100000|	0.0205928|	0.0000645	|44.89084507
500000|	0.090101|	0.0000713	|1263.68864
1000000|	0.1790582|	0.0000764|	2343.693717

![alt tag](gráfica.png)

## Gráfica Comparativa
La línea roja representa la aceleración del algoritmo paralelo y la línea azul representa la aceleración del algoritmo secuencial. 

![alt tag](aceleracion.png)

## Conclusiones

* Se evidencia que el debido uso de una GPU para la ejecución de algoritmos que trabajan con mucha información, en nuestro caso un algoritmo de ordenamiento, aumenta la velocidad de ejecución con respecto a la ejecución del mismo en una CPU.

* Cabe mencionar que es necesario conocer las especificaciones de la GPU a utilizar debido a que no se deben sobrepasar los límites de memoria e hilos de la misma, para así identificar los límites tanto de información a cargar como de las técnicas de las que se deben hacer uso en caso tal de necesitar una mayor capacidad en memoria
