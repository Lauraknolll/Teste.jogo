#pragma once

#include "Fase.h"

#include "../Entidade/Personagens/Jogador.h"
#include "../Entidade/Personagens/InimigoFacil.h"
#include "../Entidade/Personagens/InimigoMedio.h"
#include "../Listas/ListaEntidades.h"


namespace Fases
{
    class Fase1 : public Fase
    {
        private:
            
        public:
            Fase1();
            ~Fase1();
            void executar();
            void criarInimigos();
    };
} 
