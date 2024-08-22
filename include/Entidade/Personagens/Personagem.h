#pragma once
#include "../Entidade.h"

namespace Personagens
{
    class Personagem : public Entidade::Entidade
    {
        protected:
        
        public:
            Personagem();
            ~Personagem();
            virtual void executar() = 0;
    };
}
