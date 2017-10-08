#include <iostream>
#include <string>

#include "main/MainProcess.h"
#include "Model/Torneo.h"
#include "Model/ParticipanteFactory.h"
#include "utils/logger/Logger.h"


const std::string mainLogId = "Main";

int main() {

    LOG_MODE mode;
    mode = INFO;
    Logger::setMode(mode);

    std::cout << "Comenzando el torneo de Beach Volley!" << std::endl;

    Logger::log(mainLogId, "Comenzado el Torneo de Beach Volley.", INFO);

    ParticipanteFactory *pf = new ParticipanteFactory;
    Participante *p;
    p = pf->crearParticipante();
    std::cout << "Nombre: " << p->getName() << std::endl;

    return 0;
}