//
// Created by fedelonghi on 16/09/17.
//

#include "Participante.h"

#include <cstring>
#include <cstdlib>

Participante::Participante() {

}

Participante::~Participante() {
    delete this->nombre;

}

char *Participante::getName(void) {
    return this->nombre;
}

void Participante::setName(char *new_name) {
    this->nombre = static_cast<char *>(malloc(sizeof(char*)));
    strcpy(this->nombre, new_name);
}

void Participante::setID(int new_id) {
    this->id = new_id;
}

int Participante::getID(void) {
    return this->id;
}
