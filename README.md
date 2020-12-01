# Trabajo Practico Numero 1

Repositorio inicial para el Trabajo Practico 1 de la asignatura de Ingeniería de Software de la carrera de Especialización en Sistemas Embebidos

## Primera Parte

1. Clonar este repositorio en su computadora y desplegar la rama *original*.

2. Agregar en el archivo `alumnos.h` la declaración de una función que serialice sus datos personales, similar a la del siguiente ejemplo:

    ```c
    bool EstebanVolentini(char * cadena, size_t espacio);
    ```

3. Agregar al archivo `alumnos.c` la implementación de la funcion que serialice sus datos personales similar a la del siguiente ejemplo:

    ```c
    bool EstebanVolentini(char * cadena, size_t espacio) {
        const struct alumno_s alumno = {
            .apellidos = "VOLENTINI",
            .nombres = "Esteban Daniel",
            .documento = "23.517.968",
        };

        return SerializarAlumno(cadena, espacio, &alumno);
    }
    ```

4. Agregar la correspondiente llamada en el programa principal para que se muestren su datos peronales, en forma similiar a la del siguiente ejemplo:

    ```c
    if (EstebanVolentini(cadena, sizeof(cadena))) {
        printf("Alumno: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar el alumno\r\n");
    }
    ```

5. Compilar el programa, ejecutarlo y revisar que el mismo funcione correctamente.

6. Confirmar los cambios con un *commit* en la rama *original* con el texto **"Se agregan los datos del alumno APELLIDO, Nombre"** en la descipción del mismo

7. Cambiar a la rama *master* y traer los cambios del servidor con un *pull*.

8. Mezcar la rama *original* en la rama *master*, resolver los conflictos y confirmar los cambios con un *commit* en la rama *master*.

9. Enviar los cambios efectuados en la rama *master* al servidor con un *push*.

10. Si en el proceso alguien mas envió cambios a la rama master entonces el servidor rechazará el envio. En este caso deberá realizar un nuevo *pull* de la rama master y resolver los confictos. Despues generar un neuvo *commit* e intentar un nuevo *push*. Este paso se deberá repetir hasta que nadie efectué cambios entre el *pull* y el *push* y se pueda completar la actualización del servidor.