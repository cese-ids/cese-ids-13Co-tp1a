/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/06/21
 */
 
/*=====[Inclusion of own header]=============================================*/

#include "alumnos.h"
#include <stdio.h>

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

/*=====[Implementations of interrupt functions]==============================*/

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno) {
    int resultado;
    const char FORMATO[] = "{"
        "\"documento\":\"%s\","
        "\"apellidos\":\"%s\","
        "\"nombres\":\"%s\""
    "}";

    resultado = snprintf(cadena, espacio, FORMATO, 
             alumno->documento, alumno->apellidos, alumno->nombres);

    return (resultado >= 0);
}


bool SantiagoAlmandos(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "ALMANDOS MARINZULICH",
        .nombres = "Santiago Nicolas",
        .documento = "93.748.537",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool EstebanVolentini(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "VOLENTINI",
        .nombres = "Esteban Daniel",
        .documento = "23.517.968",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}

bool MaximilianoGraf(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "GRAF",
        .nombres = "Maximiliano",
        .documento = "33.717.154",
    };

    return SerializarAlumno(cadena, espacio, &alumno);

}

bool AlejandroPermingeat(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "PERMINGEAT",
        .nombres = "Alejandro",
        .documento = "99.999.999",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
    
}

bool CristianFunes(char * cadena, size_t espacio) {

    const struct alumno_s alumno = {
        .apellidos = "FUNES",
        .nombres = "Cristian Marcelo",
        .documento = "35.763.252",
    };

    return SerializarAlumno(cadena, espacio, &alumno);

}

bool WilliamsLimonchi(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "LIMONCHI",
        .nombres = "Williams Ernesto",
        .documento = "48.164.921",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool CristianLocatelli(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "LOCATELLI",
        .nombres = "Cristian Angel",
        .documento = "33.278.404",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool IgnacioMoya(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "MOYA",
        .nombres = "Ignacio Jose",
        .documento = "35.583.274",

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool MartinMelloTeggia(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "MELLO TEGGIA",
        .nombres = "Martin",
        .documento = "35.146.241",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool JoaquinUlloa(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "ULLOA",
        .nombres = "Joaquin Gaspar",
        .documento = "36.530.838",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool SantiagoEsteva(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "ESTEVA",
        .nombres = "Santiago",
        .documento = "37.654.905",

    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

/*=====[Implementations of private functions]================================*/
