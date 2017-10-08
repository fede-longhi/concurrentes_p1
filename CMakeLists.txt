cmake_minimum_required(VERSION 3.8)
project(concurrentes_p1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES code/main.cpp code/Model/Participante.cpp code/Model/Participante.h code/Model/Torneo.cpp code/Model/Torneo.h code/Model/Predio.cpp code/Model/Predio.h code/Model/DetalleDePartidos.cpp code/Model/DetalleDePartidos.h code/Model/Resultados.cpp code/Model/Resultados.h code/Model/Pareja.cpp code/Model/Pareja.h code/Model/Marea.cpp code/Model/Marea.h code/Model/ParticipanteFactory.cpp code/Model/ParticipanteFactory.h code/utils/logger/Logger.cpp code/utils/logger/Logger.h code/utils/ipc/lock/LockFile.cpp code/utils/ipc/lock/LockFile.h code/main/MainProcess.cpp code/main/MainProcess.h)
add_executable(concurrentes_p1 ${SOURCE_FILES})