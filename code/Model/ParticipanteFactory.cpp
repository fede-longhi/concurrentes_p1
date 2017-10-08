//
// Created by fedelonghi on 18/09/17.
//

#include "ParticipanteFactory.h"


ParticipanteFactory::ParticipanteFactory(){
    this->next_id = 0;
    //cargar nombres;
}

ParticipanteFactory::~ParticipanteFactory() {
}

Participante *ParticipanteFactory::crearParticipante() {
    Participante *p = new Participante;
    char name[] = {'F','e','d','e','\0'};
    p->setName(name);
    p->setID(this->next_id);
    this->next_id ++;
    return p;
}
