#include <iostream>

#include <SFML/Graphics.hpp>

#include "Planet.h"

int main()
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 10;
	sf::RenderWindow window(sf::VideoMode(1500, 1000), "Solar System Simulation 2D", sf::Style::Default, settings);
	window.setFramerateLimit(60);


	Planet sun(200.f, 0.f, 0.f);
	Planet mercury(4.8f, 250.f, 3.0f);
	Planet venus(12.f, 300.f, 1.5f);
	Planet earth(12.7f, 350.f, 1.0f);
	Planet mars(6.8f, 400.f, 0.5f);
	Planet jupiter(142.984f, 500.f, 0.1f);
	Planet saturn(120.536f, 600.f, 0.07f);
	Planet uranus(51.118f, 700.f, 0.05f);
	Planet neptune(49.528f, 800.f, 0.03f);


	sf::Clock clock;	

	while(window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
			{
				window.close();
			}

		}
		
		window.clear(sf::Color::Black);

		float deltaTime = clock.restart().asSeconds();

		sun.show(window, deltaTime);
		mercury.show(window, deltaTime);
		venus.show(window, deltaTime);
		earth.show(window, deltaTime);
		mars.show(window, deltaTime);
		jupiter.show(window, deltaTime);
		saturn.show(window, deltaTime);
		uranus.show(window, deltaTime);
		neptune.show(window, deltaTime);

		window.display();
	}
	
	return 0;
}
