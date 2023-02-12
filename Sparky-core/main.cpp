#include "src/graphics/window.h"

int main()
{
	using namespace sparky;
	using namespace graphics;

	Window window("Sparky!", 800, 600);

	while (!window.closed())
	{
		window.update();
	}

	return 0;
}