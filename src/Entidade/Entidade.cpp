#include "../../include/Entidade/Entidade.h"

Entidade::Entidade::Entidade() :
    Ente(), corpo(sf::Vector2f(50.f, 50.f)), id(0), velocidade(sf::Vector2f(0.01f, 0.0f))
{

}

Entidade::Entidade::~Entidade()
{

}

