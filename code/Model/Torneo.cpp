//
// Created by fedelonghi on 16/09/17.
//

#include "Torneo.h"

Torneo::Torneo() {
    this->partidos_max = 10;
    this->participantes_max = 10;
    this->predio = new Predio;
    this->marea = new Marea;
    this->partidos = new DetalleDePartidos;
    this->resultados = new Resultados;
}

Torneo::~Torneo() {
    this->partidos_max = 0;
    this->participantes_max = 0;
    delete this->predio;
    delete this->marea;
    delete this->partidos;
    delete this->resultados;

    std::set<Participante*>::iterator it;
    for (it=this->participantes.begin(); it!=this->participantes.end(); ++it) {
        Participante *p = *it;
        delete p;
    }
}

int Torneo::obtenerParticipantesMax() {
    return this->participantes_max;
}

int Torneo::obtenerPartidosMax() {
    return this->partidos_max;
}

bool Torneo::agregarParticipante(Participante *p){
    if (this->participantes.size()<this->participantes_max) {
        this->participantes.insert(p);
        return true;
    }
    return false;
}

void Torneo::printParticipantes(){
    std::cout<<"Participantes:";
    std::set<Participante*>::iterator it;
    for (it=this->participantes.begin(); it!=this->participantes.end(); ++it) {
        Participante *p = *it;
        std::cout << ' ' << p->getName();
    }
    std::cout << '\n';
}
