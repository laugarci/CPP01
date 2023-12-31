# CPP01

## Ex00 - diferencia entre stack y heap

### STACK:

Almacena variables locales, como enteros, punteros y estructuras de datos pequeñas.
La vida útil de los datos en el stack está limitada al alcance de la función que los crea.

**- Ubicación en la memoria:** el stack es una región de la memoria que se organiza como una estructura de datos de tipo "último en entrar, primero en salir".
Los datos en el stack se almacenan en bloques contiguos de memoria, y la gestión de la memoria es manejada automáticamente por el compilador.

**- Asignación y Liberación Rápida:** la asignación y liberación de memoria en el stack son muy rápidas, ya que solo implica mover el puntero del stack hacia arriba o hacia abajo.

**- Tamaño Fijo:** el tamaño del stack generalmente se establece al principio del programa y es fijo durante la ejecución.

**- Almacenamiento de Variables Locales:** se utiliza para almacenar variables locales y para gestionar la ejecución de funciones.

### HEAP:

Se utiliza para asignar memoria dinámicamente usando new (C++) o malloc (C).
Los datos en el heap pueden persistir más allá del alcance de la función que los creó.
Útil para estructuras de datos más grandes o cuando no se conoce el tamaño exacto de antemano

**- Ubicación en la memoria:** el heap es una región de la memoria utilizada para almacenar datos dinámicamente asignados durante la ejecución del programa.

**- Asignación y Liberación Más Lenta:** la asignación y liberación de memoria en el montón pueden ser más lentas en comparación con el stack, ya que requieren la gestión manual del programador.

**- Tamaño Dinámico:** el tamaño del heap puede crecer o reducirse durante la ejecución del programa según las necesidades.

**- Almacenamiento de Datos Dinámicos:** se utiliza para almacenar datos que no tienen un tamaño conocido en tiempo de compilación o que deben persistir más allá del alcance de una función.

### ELECCIÓN:
La elección entre el stack y el heap depende de la vida útil, el tamaño y la forma en que se utilizarán los datos.
El stack es más eficiente para datos locales y de corta duración, mientras que el heap es más apropiado para datos dinámicos y de mayor duración.
