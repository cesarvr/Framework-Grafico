/*
 Cesar Valdez
 
 */

#ifdef GL_ES
precision mediump float;
#endif

//varying vec2 textura_cord_out;
varying vec3 Intencidad_de_luz;

//Uniforms.
//uniform sampler2D textura;

void main (void)
{
    
  //  vec4 text_color = texture2D(textura, textura_cord_out);
    vec4 text_color = vec4(0.7,0.2,0.2,1.0);
    gl_FragColor = text_color; //* vec4(Intencidad_de_luz , 1.0) ;
  
}
