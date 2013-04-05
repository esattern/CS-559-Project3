#version 400

//Code Provided by Perry Kivolowitz

layout (location = 0) in vec3 vertex_position;

uniform mat4 mvp;

void main()
{
	gl_Position = mvp * vec4(vertex_position, 1.0);
}