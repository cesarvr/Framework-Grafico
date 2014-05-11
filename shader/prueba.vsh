/*
 Cesar Valdez
 
 */

uniform mat4 MVP;

attribute vec3 position;
attribute vec3 normal;

    
void main(void)
{
	vec3 nm = normalize( normal );
    gl_Position = MVP * vec4(position, 1.0);
    
    
}