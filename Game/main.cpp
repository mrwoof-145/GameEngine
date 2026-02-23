#include <Engine/Elements.h>
int main()
{
	try
	{
		Engine::Game game{};
		game.Run();
	}
	catch (const std::runtime_error&)
	{
		return EXIT_FAILURE;
	}
	catch (...)
	{
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}