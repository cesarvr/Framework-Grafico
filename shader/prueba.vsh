/*
 Cesar Valdez
 
 */

uniform mat4 MVP;
uniform mat3 normalMatrix;
uniform mat4 ModelViewMatrix;


attribute vec3 position;
attribute vec3 normal;
//attribute vec2 textura_cord;

//varying vec2 textura_cord_out;
varying vec3 Intencidad_de_luz;

    
void main(void)
{
	
	vec3 L = vec3(1, 1, 1);
	vec4 posicion_luz = vec4(0.0, 1.5, 0.0,1.0);

    //cambio de cordenadas de referencia.
    vec3 tnorm = normalize( normalMatrix * normal );
    vec4 eyeCoords = ModelViewMatrix * vec4( position,1.0 );

    
    
    vec3 s = normalize(vec3(posicion_luz - eyeCoords));
	Intencidad_de_luz =  L * max( dot(s,tnorm), 0.0 );

   // textura_cord_out = textura_cord;
    gl_Position = MVP * vec4(position, 1.0);
    
    
}