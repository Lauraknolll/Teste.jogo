#include "../../include/Entidade/Entidade.h"

Entidade::Entidade() :
    corpo(sf::Vector2f(100.f, 100.f))
{
    corpo.setFillColor(sf::Color::Blue);
}

Entidade::~Entidade()
{

}

