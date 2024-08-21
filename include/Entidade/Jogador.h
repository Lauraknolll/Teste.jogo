#pragma once

#include "Personagem.h"

class Jogador : public Personagem
{
    private:
    public:
        Jogador();
        ~Jogador();
        sf::RectangleShape getCorpo();
};