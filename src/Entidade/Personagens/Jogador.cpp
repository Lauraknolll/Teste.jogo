#include "../../../include/Entidade/Personagens/Jogador.h"

Personagens::Jogador::Jogador() :
    Personagem()
{
    corpo.setFillColor(sf::Color::Blue);
    corpo.setOrigin(sf::Vector2f(-100.0f, -400.0f));
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
    corpo.move(sf::Vector2f(2.0f, 0.0f));
}

void Personagens::Jogador::andaPraEsquerda()
{
    corpo.move(sf::Vector2f(-2.0f, 0.0f));
}

void Personagens::Jogador::executar()
{
    corpo.setFillColor(sf::Color::Magenta);
}