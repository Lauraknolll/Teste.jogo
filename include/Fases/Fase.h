#pragma once

#include "../Ente.h"

namespace Fases
{
    class Fase : public Ente
    {
        protected:
        public:
            Fase();
            ~Fase();
            virtual void executar();
    };
}