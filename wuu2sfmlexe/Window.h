#pragma once

#include "SFML/Audio.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Network.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include "Adjectives.h"
#include "Colors.h"
#include "Animals.h"

#include <iostream>
#include <sstream>
#include <random>
#include <ctime>

class Window
{
private:
	// Seed/Setup RNG
	std::mt19937 mersenne{static_cast<std::mt19937::result_type>(time(NULL))};

	// Window
	sf::RenderWindow* window;
	sf::VideoMode windowDimensions;
	sf::ContextSettings settings;
	unsigned int windowWidth{}, windowHeight{};

	bool windowOpen;

	// Event
	sf::Event event;

	// Text
	sf::Font fontWuu2Message;
	sf::Text textWuu2Message;
	sf::Font fontCreature;
	sf::Text textCreature;

	// Texture/Sprites
	sf::Texture tavern;
	sf::Sprite background;

	// Music
	sf::Music musicTavern;

	// Class objects
	Adjectives adjectives;
	Colors colors;
	Animals animals;

	// Current adjective, color, animal.
	std::string adjective{};
	std::string color{};
	std::string animal{};

public:
	// Constructors & Destructors
	Window();
	~Window();

	// Accessor Functions
	bool WindowOpen();


	// Initialisation Functions
	void InitWindow();
	void InitTextures();
	void InitText();

	// Functions
	void PollEvents();
	void Update();
	void UpdateCreatureText();
	void Render();
	void RenderText(sf::RenderTarget& target);

};

