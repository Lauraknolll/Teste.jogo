#pragma once

#include "Personagem.h"

namespace Personagens
{
    class Inimigo : public Personagem
    {
        protected:
            sf::Clock relogio;
        public:
            Inimigo();
            ~Inimigo();
            virtual void executar() = 0;
    };
}
