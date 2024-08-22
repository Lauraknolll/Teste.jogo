#pragma once

#include "Gerenciador/GerenciadorGrafico.h"
#include "Gerenciador/GerenciadorEventos.h"
#include "Entidade/Personagens/Jogador.h"
#include "Entidade/Personagens/InimigoFacil.h"

class Jogo
{
    private:
    public:
        Jogo();
        ~Jogo();
        void executar();
};