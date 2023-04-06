#ifndef Game_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Represents the current state of the game
enum GameState {
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};

class Game
{
public:
	//game state
	GameState State;
	bool Keys[1024];
	unsigned int Width, Height;

	Game(unsigned int width, unsigned int height);
	~Game();

	// initialize game state
	void Init();

	//game loop
	void ProcessInput(float dt);
	void Update(float dt);
	void Render();

private:
	const char *vertexShaderSource = "#version 330 core\n"
		"layout (location = 0) in vec3 aPos;\n"
		"void main()\n"
		"{\n"
		"   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
		"}\0";

	const char *fragmentShaderSource = "#version 330 core\n"
		"out vec4 FragColor;\n"
		"void main()\n"
		"{\n"
		"   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
		"}\n\0";

};
#define GAME_H
#endif