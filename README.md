# EXAMEN-1
https://github.com/adrianarmm/EXAMEN-1.git

Para ingresar en cada parte hay creada una carpeta con respectivo nombre, y dentro de la PARTE 2, hay creadas mas carpetas con los ejercicios propuestos, dentro estara el ejercicio en cpp.

PARTE 1
1. C++ es un lenguaje de programación ampliamente utilizado que ha evolucionado a lo largo de los años. ¿Cuáles de las siguientes opciones describen correctamente las características centrales de C++?

d. Todas las anteriores

2. Durante el proceso de desarrollo, a menudo es necesario compilar y enlazar múltiples archivos. En este contexto, ¿qué es un archivo makefile?

b. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación

3. En C++, las variables pueden referirse a datos o direcciones de memoria. En relación a esto, ¿qué son los punteros en la programación C++?

b. Variables que almacenan la dirección de otra variable


PARTE 2:  compuesta por 10 apartados
1. Operaciones básicas, en el cual ingresando dos numeros, se imprime la suma de ambos números
2. Gestion de estudiantes, en este programa se muuestra el nombre, edad, y en que año o grado esta, se imprime lo anterior explicado en orden.
3.  Optimizacion de memoria, se muestran valores antes y despues del intercambio
4. Manejo de excepciones, ingreso dos numeros y el resultado es su division
5. Registro de materias, nos imprime el numero de materias registradas
6. Promedio, ingresamos las calificaciones de los alumnos y ponemos promedio y el programa nos da el promedio de dichas calificaciones.
7. Manejo de Ausencias, con los datos introducidos, fecha y estado nos muestra ordenadamente lo mencionado.
8. Filtrado de estudiantes por grado, nos muestra los grados disponibles y nombres.
9. Gestion de Excepciones Personalizadas, nos muestra lo que la alumna en este caso Adriana Reyes ha registrado su asistencia
10. Registro de profesores, con los datos introducidos como nombre, edad, asignaturas que impartes y la experiencia, imprime todo lo anterior explicado en orden.

PARTE 3 
1.	La programación ha adoptado diferentes enfoques a lo largo del tiempo. Explica:

•	¿Cómo la programación orientada a objetos difiere de la programación procedimental?

En la programación orientada a objetos (POO), los programas se estructuran alrededor de objetos, estos ienen propiedades y comportamientos. A diferencia de la programación procedimental, que sigue una secuencia lineal, la POO promueve la reutilización de código mediante la herencia, que permite la creación de nuevas clases, polimorfismo permite dar respuestas únicas y la encapsulación oculta detalles internos. En resumen, la POO facilita la organización modular, la reutilización y el mantenimiento del código a través de la estructuración alrededor de objetos.


•	¿Cómo C++ brinda soporte para ambos paradigmas?

C++ brinda soporte para ambos paradigmas, orientado a objetos y programación genérica, a través de su combinación de características. 
C++ permite la definición de clases y objetos, lo que facilita la programación orientada a objetos. 
Además, C++ también admite plantillas, que permiten la programación genérica al proporcionar una forma de escribir código que puede funcionar con diferentes tipos de datos. Esta combinación de características hace que C++ sea flexible y versátil, permitiendo a los desarrolladores utilizar el paradigma que mejor se adapte a sus necesidades.

2. Las excepciones en C++ tienen un comportamiento específico. Describe:

•   ¿Qué es la propagación de una excepción?

La propagación de una excepción en C++ se refiere al proceso de pasar una excepción lanzada en un bloque de código a un bloque de código superior en la pila de llamadas. Esto permite que la excepción sea manejada en un nivel superior (catch) o, si no se maneja, se propague aún más hacia arriba en la pila de llamadas hasta que se encuentre un bloque de código que pueda manejarla.

•   ¿Qué ocurre si una excepción lanzada no es capturada por ningún bloque catch?

Si una excepción lanzada no es capturada por ningún bloque catch, la ejecución del programa se detendrá y se mostrará un mensaje de error al usuario(std::terminate()). Esto se conoce como "falla no controlada" y puede resultar en la terminación abrupta del programa. Es importante capturar y manejar adecuadamente las excepciones para evitar este tipo de situaciones y garantizar un comportamiento controlado y predecible del programa. 

3.	La gestión de recursos en un concepto crucial en la programación. Explica:  

•	¿Qué se entiende por “Adquisición de Recursos” en el contexto del C++?

En el contexto de C++, la "adquisición de recursos" se refiere al proceso de obtener y asignar recursos necesarios para ejecutar un programa. Esto puede incluir la asignación de memoria, la apertura de archivos, la conexión a bases de datos u otras operaciones similares. La adquisición de recursos implica asegurarse de que los recursos necesarios estén disponibles y sean utilizados de manera eficiente durante la ejecución del programa. Es importante gestionar adecuadamente la adquisición de recursos para evitar fugas de memoria, conflictos de acceso y otros problemas que puedan afectar el rendimiento y la estabilidad del programa.

•	¿Por qué es importante y como se relaciona con la gestión  de excepciones?

La gestión de excepciones es importante porque permite identificar y resolver problemas o situaciones inesperadas que pueden surgir en el proceso de trabajo. Se relaciona con la gestión de excepciones ya que si se produce una excepcion, la liberacion de recursos debe realizarse incluso si no se maneja directamente en el bloque catch.

