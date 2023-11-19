# CPP01

## Ex00 - diferencia entre stack y heap

### - Stack:

Almacena variables locales, como enteros, punteros y estructuras de datos pequeñas.
La vida útil de los datos en el stack está limitada al alcance de la función que los crea.

#### Ubicación en la memoria:

El stack es una región de la memoria que se organiza como una estructura de datos de tipo "último en entrar, primero en salir".
Los datos en el stack se almacenan en bloques contiguos de memoria, y la gestión de la memoria es manejada automáticamente por el compilador.

#### Asignación y Liberación Rápida:

La asignación y liberación de memoria en la pila son muy rápidas, ya que solo implica mover el puntero de la pila hacia arriba o hacia abajo.

#### Tamaño Fijo:

El tamaño de la pila generalmente se establece al principio del programa y es fijo durante la ejecución.

#### Almacenamiento de Variables Locales:

Se utiliza para almacenar variables locales y para gestionar la ejecución de funciones.

### - Heap:

Se utiliza para asignar memoria dinámicamente usando new (C++) o malloc (C).
Los datos en el montón pueden persistir más allá del alcance de la función que los creó.
Útil para estructuras de datos más grandes o cuando no se conoce el tamaño exacto de anteman

#### Ubicación en la memoria:

El heap es una región de la memoria utilizada para almacenar datos dinámicamente asignados durante la ejecución del programa.

#### Asignación y Liberación Más Lenta:

La asignación y liberación de memoria en el montón pueden ser más lentas en comparación con la pila, ya que requieren la gestión manual del programador.

#### Tamaño Dinámico:

El tamaño del montón puede crecer o reducirse durante la ejecución del programa según las necesidades.

#### Almacenamiento de Datos Dinámicos:

Se utiliza para almacenar datos que no tienen un tamaño conocido en tiempo de compilación o que deben persistir más allá del alcance de una función.

### - Elección:
La elección entre el stack y el heap depende de la vida útil, el tamaño y la forma en que se utilizarán los datos.
La pila es más eficiente para datos locales y de corta duración, mientras que el montón es más apropiado para datos dinámicos y de mayor duración.
