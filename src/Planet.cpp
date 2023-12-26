#include "Planet.h"

float generateRandomFloat(float min, float max)
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dis(min, max);
    return dis(gen);
}

Planet::Planet(float r, float d, float o)
{
	this->radius = r;
	this->distance = d;
	this->angle = 0.0f;
    this->orbitSpeed = o;

    planet.setRadius(radius);
    planet.setOrigin(radius, radius);
    planet.setPosition(750, 500);
    planet.setFillColor(sf::Color(255, 255, 255, 100));
}

void Planet::show(sf::RenderWindow& window, float deltaTime)
{
    update(deltaTime);

	window.draw(this->planet);
}

void Planet::update(float deltaTime)
{
    angle += orbitSpeed * deltaTime;
    
    float x = 750 + distance * std::cos(angle);
    float y = 500 + distance * std::sin(angle);
    
    planet.setPosition(x, y);
}
