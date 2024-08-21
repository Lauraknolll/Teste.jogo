#pragma once
#include "SFML/Graphics.hpp"

namespace Entidade 
{
    class Entidade
    {
        protected:
          sf::RectangleShape corpo;
        public:
         Entidade();
        ~Entidade();
    };
}
