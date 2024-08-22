#pragma once

#include "Personagem.h"

namespace Personagens
{
    class Jogador : public Personagem
    {
        private:
        public:
            Jogador();
            ~Jogador();
            const sf::RectangleShape getCorpo();
            void executar();
            void andaPraDireita();
            void andaPraEsquerda();
    };
    
}
