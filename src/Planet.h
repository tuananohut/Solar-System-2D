#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include <random>
#include <cmath>
#include <string>

#include <SFML/Graphics.hpp>

float generateRandomFloat(float min, float max);

class Planet
{
public:
	Planet() = default;
	Planet(float r, float d, float o);

	void show(sf::RenderWindow& window, float deltaTime);
	void update(float deltaTime);


private:
	float radius, angle, distance, orbitSpeed;
	sf::CircleShape planet;

	const float PI = 3.141592653589793238462643383279502884197;
};

