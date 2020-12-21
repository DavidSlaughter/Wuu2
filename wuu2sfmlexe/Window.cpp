#include "Window.h"




//====>___   CONSTRUCTORS & DESTRUCTORS   ___<====
Window::Window()
{
	InitWindow();
	InitTextures();
	InitText();
}
Window::~Window()
{
	delete window;
}

//====>___   ACCESSOR FUNCTIONS   ___<====
bool Window::WindowOpen()
{
	return windowOpen;
}




//====>___   INITIALISATION FUNCTIONS   ___<====

void Window::InitWindow()
{
	// Set window settings
	windowWidth = 960; windowHeight = 540;
	windowOpen = true;
	settings.antialiasingLevel = 16;
	windowDimensions.width = windowWidth; windowDimensions.height = windowHeight;
	window = new sf::RenderWindow(windowDimensions, "", sf::Style::Titlebar | sf::Style::Close, settings);
	window->setFramerateLimit(30);

	// Set music
	if (!musicTavern.openFromFile("Music/tavernMusic.wav")) std::cout << "Music failed to load. Window.cpp InitWindow()";
	musicTavern.setVolume(80);
	musicTavern.setLoop(true);
	musicTavern.setLoopPoints(sf::Music::TimeSpan(sf::seconds(0), sf::seconds(85)));
	musicTavern.play();
}

void Window::InitTextures()
{
	// Load background texture
	if (!tavern.loadFromFile("Images/TavernArtBlurred.png")) std::cout << "Background art failed to load.";
	background.setTexture(tavern);
	background.setColor(sf::Color(255, 255, 255, 220));
}

void Window::InitText()
{
	// Initialise "What you up to..." message at top
	if (!fontWuu2Message.loadFromFile("Fonts/quesha.ttf")) std::cout << "font wuu2 message failed to load. Window.cpp InitText()";
	textWuu2Message.setFont(fontWuu2Message);
	textWuu2Message.setCharacterSize(70);
	textWuu2Message.setFillColor(sf::Color::White);
	textWuu2Message.setOutlineColor(sf::Color(170, 108, 57, 255));
	textWuu2Message.setOutlineThickness(1.7);
	textWuu2Message.setString("What you up to...");
	textWuu2Message.setOrigin(textWuu2Message.getLocalBounds().width / 2.0, textWuu2Message.getLocalBounds().height / 2.0);
	textWuu2Message.setPosition(windowWidth/2.0, 35);

	// Initialise creature message at bottom
	if (!fontCreature.loadFromFile("Fonts/comic.ttf")) std::cout << "font creature message failed to load. Window.cpp InitText()";
	textCreature.setFont(fontCreature);
	textCreature.setCharacterSize(58);
	textCreature.setStyle(sf::Text::Bold);
	textCreature.setFillColor(sf::Color(230,210,210,255));
	textCreature.setOutlineColor(sf::Color::Black); textCreature.setOutlineThickness(4.0);
	textCreature.setString("Press enter or click...");
	textCreature.setOrigin(textCreature.getLocalBounds().width/2.0, 10);
	textCreature.setPosition(windowWidth/2.0, 240);
}




//====>___   FUNCTIONS   ___<====

void Window::PollEvents()
{
	while (window->pollEvent(event))
	{
		switch (event.type)
		{
			case sf::Event::Closed:
				window->close();
				break;
			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Escape) window->close();
				if (event.key.code == sf::Keyboard::Enter) UpdateCreatureText();
				break;
			case sf::Event::MouseButtonPressed:
				if (event.key.code == sf::Mouse::Left) UpdateCreatureText();
				break;
		}
	}
}

void Window::Update()
{
	PollEvents();
}

// If enter or mouse button is clicked, the creature text changes (is updated)
void Window::UpdateCreatureText()
{
	// Store the text in a string stream
	std::stringstream ss;

	// Update the adjective, color, and animal based on chance (weighted probability)
	adjective = adjectives.GetAdjectiveName(adjectives.AdjectiveProbabilityDistribution(mersenne));
	color = colors.GetColorName(colors.ColorProbabilityDistribution(mersenne));
	animal = animals.GetAnimalName(animals.AnimalProbabilityDistribution(mersenne));

	// If adjectives are on, include an adjective
	if (adjectives.AdjectivesOn())
	{
		if (adjectives.adjectiveRoll(mersenne) <= adjectives.adjectiveChance)
		{
			ss << adjective << " ";
		}
	}

	ss << color << " " << animal << " ?";

	textCreature.setString(ss.str());
	textCreature.setOrigin(textCreature.getLocalBounds().width/2.0, 10);
	textCreature.setPosition(windowWidth / 2.0, 240);
	std::cout << "\n\n" << ss.str();
}

void Window::Render()
{
	window->clear();

	window->draw(background);
	RenderText(*window);

	window->display();
}

void Window::RenderText(sf::RenderTarget& target)
{
	window->draw(textWuu2Message);
	window->draw(textCreature);
}