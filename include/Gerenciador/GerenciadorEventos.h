#pragma once

#include "GerenciadorGrafico.h"
#include "../Entidade/Jogador.h"

using namespace Personagens;

namespace Gerenciador
{
    class GerenciadorEvento
    {
        private:
        GerenciadorGrafico* pGGrafico;
        Jogador* pontJog1;
        /* Usando o padrão de projeto Singleton para que haja apenas uma instancia do gerenciador gráfico */
        static GerenciadorEvento* pInstanciaGE;
        GerenciadorEvento();
        public:
        ~GerenciadorEvento();
        /* Parte do Singleton */
        static GerenciadorEvento* getGerenciadorEventos();
        void setGerenciadosGrafico(GerenciadorGrafico* pGG);
        void setJogador(Jogador* jog);
        void executar(sf::Event evento);
    };
}