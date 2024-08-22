#pragma once

#include "Inimigo.h"

namespace Personagens
{
    class InimigoMedio : public Inimigo
    {
        private:
        public:
            InimigoMedio();
            ~InimigoMedio();
            void executar();
            const sf::RectangleShape getCorpo();
    };
}