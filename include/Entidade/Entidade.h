#pragma once
#include "SFML/Graphics.hpp"

#include "../Ente.h"

namespace Entidade 
{
    class Entidade : public Ente
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
