//
// Created by fedelonghi on 18/09/17.
//

#ifndef CONCURRENTES_P1_PARTICIPANTEFACTORY_H
#define CONCURRENTES_P1_PARTICIPANTEFACTORY_H

#include"Participante.h"

class ParticipanteFactory{
private:
    int next_id;

public:
    ParticipanteFactory();
    ~ParticipanteFactory();

    Participante *crearParticipante();
};



#endif //CONCURRENTES_P1_PARTICIPANTEFACTORY_H
