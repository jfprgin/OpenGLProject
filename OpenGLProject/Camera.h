#pragma once
#include <GL/glew.h>
#include "Dependencies/glm-0.9.9.8/glm/glm.hpp"
#include "Dependencies/glm-0.9.9.8/glm/gtc/matrix_transform.hpp"

class Camera
{
public:
	Camera(GLfloat FOV, GLfloat width, GLfloat height, GLfloat nearPlane, GLfloat farPlane, glm::vec3 camPos);
	~Camera();
	glm::mat4 getViewMatrix();
	glm::mat4 getProjectionMatrix();
	glm::vec3 getCameraPosition();

private:
	glm::mat4 viewMatrix;
	glm::mat4 projectionMatrix;
	glm::vec3 cameraPos;
};