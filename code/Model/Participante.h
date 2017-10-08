//
// Created by fedelonghi on 16/09/17.
//

#ifndef CONCURRENTES_P1_PARTICIPANTE_H
#define CONCURRENTES_P1_PARTICIPANTE_H


class Participante {
private:
    int id;
    char *nombre;
public:
    Participante();
    ~Participante();

    char *getName(void);
    void setName(char *);
    void setID(int);
    int getID(void);

};


#endif //CONCURRENTES_P1_PARTICIPANTE_H
