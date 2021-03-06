#pragma once
#include "shader.h"
#include "ResourceManager.h"


class Cube
{
public:
	Cube(float vertices[]);
	~Cube();

	void renderCube();
	const int getVBO() { return VBO; }
	const int getVAO() { return VAO; }

private:

	unsigned int VBO, VAO; 
	float m_vertices[288];
};

