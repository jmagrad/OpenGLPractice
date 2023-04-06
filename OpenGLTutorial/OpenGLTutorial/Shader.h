#ifndef Shader_h
#include <string>
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <iostream>

class Shader
{
private: 
	//check compilation errors
	void checkCompileErrors(unsigned int object, std::string type);

public:
	//state
	unsigned int ID;
	//default constructor
	Shader() {};

	//sets current shader as active
	Shader &Use();

	//compiles the shader from given source code
	void Compile(const char *vertexSource, const char *fragmentSource, const char *geomtrySource = nullptr); //geometry source code is optional

	//Utility functions
	void    SetFloat(const char *name, float value, bool useShader = false);
	void    SetInteger(const char *name, int value, bool useShader = false);
	void    SetVector2f(const char *name, float x, float y, bool useShader = false);
	void    SetVector2f(const char *name, const glm::vec2 &value, bool useShader = false);
	void    SetVector3f(const char *name, float x, float y, float z, bool useShader = false);
	void    SetVector3f(const char *name, const glm::vec3 &value, bool useShader = false);
	void    SetVector4f(const char *name, float x, float y, float z, float w, bool useShader = false);
	void    SetVector4f(const char *name, const glm::vec4 &value, bool useShader = false);
	void    SetMatrix4(const char *name, const glm::mat4 &matrix, bool useShader = false);

};
#define Shader_h
#endif

