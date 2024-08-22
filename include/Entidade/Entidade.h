#pragma once
#include "SFML/Graphics.hpp"

namespace Entidade 
{
    class Entidade
    {
        protected:
          float x;
          float y;
          const int id;
          sf::RectangleShape corpo;
          sf::Vector2f velocidade;
        public:
         Entidade();
        ~Entidade();
        virtual void executar() = 0;
    };
}
