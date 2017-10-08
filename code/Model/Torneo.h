//
// Created by fedelonghi on 16/09/17.
//

#ifndef CONCURRENTES_P1_TORNEO_H
#define CONCURRENTES_P1_TORNEO_H

#include <set>
#include <iostream>

#include "Participante.h"
#include "Pareja.h"
#include "DetalleDePartidos.h"
#include "Resultados.h"
#include "Marea.h"
#include "Predio.h"


class Torneo {
private:
    int partidos_max;
    int participantes_max;
    std::set<Participante*> participantes;
    Predio *predio;
    Marea *marea;
    DetalleDePartidos *partidos;
    Resultados *resultados;

public:
    Torneo();
    ~Torneo();

    int obtenerPartidosMax();
    int obtenerParticipantesMax();

    bool agregarParticipante(Participante *p);

    void printParticipantes();
};


#endif //CONCURRENTES_P1_TORNEO_H
