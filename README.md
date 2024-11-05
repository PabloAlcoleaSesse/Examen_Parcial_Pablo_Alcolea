# Examen_Parcial_Pablo_Alcolea
https://github.com/PabloAlcoleaSesse/Examen_Parcial_Pablo_Alcolea.git


## Ejercicio 1: Identificación de Número Positivo, Negativo o Cero

Escribe un programa en C++ que solicite al usuario ingresar un número entero. El programa deberá analizar el número ingresado e imprimir en pantalla si el número es "positivo", "negativo" o "cero". 

### Solución

He creado una función de tipo void con una variable local de tipo int ya que el número que introduzca el usuario va a ser un número entero. Posteriormente con "if" e "if else" comprobaremos la condicion de si el número es mayor, menor o ninguno, para atribuirle si es positivo, negativo o cero.

## Ejercicio 2: Día de la Semana

Crea un programa en C++ que solicite al usuario ingresar un número del 1 al 7. El programa deberá imprimir el nombre del día de la semana correspondiente al número ingresado (por ejemplo, 1 para lunes, 2 para martes, ..., 7 para domingo). 

### Solución 

Utilizamos un switch para después de atribuirle un valor a la varible de tipo entero dia, poder comprobar con los casos del 1 al 7 que día de la semana es. 

En el caso de que no se introduzca un número correcto, lo que hará el programa es llamar de nuevo a la función hasta que el numero introducido sea valido.

## Ejercicio 3: Cálculo de Promedio de Calificaciones

Un estudiante ha completado un curso de programación avanzada en C++. Durante el curso, ha realizado 8 ejercicios prácticos, y cada ejercicio se califica con una nota entre 0 y 10. Escribe un programa que solicite al usuario introducir las calificaciones obtenidas por el estudiante en cada uno de los 8 ejercicios. El programa deberá calcular y mostrar el promedio de las calificaciones. 

### Solución

Creamos una funcion de tipo double ya que el promedio puede tener decimales.
 Dentro creamos tres variables de tipo local, la primera en la que tendremos el número de notas, en la segunda tendremos la suma de todas las notas y por ultimo en la tercera, tendremos la media aritmetica de las notas que se van a introducin. 
 
Creamos un bucle for que lo que busca es que el usuario introduzca las notas el numero de veces que sean necesarias, y en este caso cada vez que se reitere el bucle aparte de introducir la nota, esta se sumara a la suma de notas. 
 Por último, se calcula la media aritmetica de las notas y se devuelve el valor de la media.
(Aunque no lo pedia: he creado la variable "numero_notas" para que si el usuario desea hacer la media con un numero distinto de notas, solo tenga que cambiar un parametro)
## Ejercicio 4: Promoción de "3 por 2" en Tienda

En una tienda se está ofreciendo una promoción en la cual el cliente puede llevarse tres artículos y pagar solo por los dos artículos más caros. Escribe un programa en C++ que solicite al usuario ingresar los precios de tres artículos y, como resultado, muestre el total que el cliente debe pagar bajo esta promoción.

### Solución 
He creado una función de tipo double con tres variables locales de tipo double ya que no sabemos si los precios tanto como iniciales como el final van a tener decimales o no.

Posteriormente creamos el imput para que el usuario introduzca los precios de los tres productos y se guarden en su variable correspondiente.

Despues con la condicion y el comparador lógico && comprobamos cual de los tres productos es el más barato y sumamos los precios de los otros dos productos.

```cpp