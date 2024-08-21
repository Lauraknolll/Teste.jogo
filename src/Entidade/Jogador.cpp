#include "../../include/Entidade/Jogador.h"

Personagens::Jogador::Jogador()
{

}

Personagens::Jogador::~Jogador()
{

}

const sf::RectangleShape Personagens::Jogador::getCorpo()
{
    return corpo;
}

void Personagens::Jogador::andaPraDireita()
{
    corpo.move(sf::Vector2f(1.0f, 0.0f));
}

void Personagens::Jogador::andaPraEsquerda()
{
    corpo.move(sf::Vector2f(-1.0f, 0.0f));
}