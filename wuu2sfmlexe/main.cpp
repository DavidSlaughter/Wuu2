#include "Window.h"

int main()
{
	// Initialise SFML window. Update and render while the window is open.

	Window window;

	while (window.WindowOpen())
	{
		window.Update();
		window.Render();
	}

	return 0;
}