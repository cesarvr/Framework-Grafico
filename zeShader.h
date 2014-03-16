//
//  zeShader.h
//  ZEnginePlus
//
//  Created by Cesar Luis Valdez on 15/09/13.
//  Copyright (c) 2013 Cesar Luis Valdez. All rights reserved.
//

#ifndef __ZEnginePlus__zeShader__
#define __ZEnginePlus__zeShader__

#include <iostream>
#include <fstream>
#include <sstream>
#include "glfw3.h"
#include <assert.h>


#define SHADER_FILE_BASE_MODEL  "modelo_luz_specular"
#define SHADER_FILE_VOXEL       "voxel"
#define SHADER_FILE_GENERAL     "skybox"

#define GLSL_MVP                "modelViewProjMatrix"
#define GLSL_POSITION           "position"
#define GLSL_TEXTURA_COORD      "textura_cord"
#define GLSL_COLOR              "color"
#define GLSL_NORMAL             "normal"
#define GLSL_TEXTURA_SAMPLE2D   "textura"


class zeShader {
protected:
    
    bool        shaderCargado;
    GLuint      ShaderProgram;
    std::string loadFicheroShader       ( std::string nombreFichero );
    GLuint      compilarShader          ( std::string shader, GLenum tipoShader );
    bool        linkarPrograma          ( GLuint prog );
    
    
public:
    
    zeShader    ();
    zeShader    (std::string shader, std::string path);
    
    
    void       cargarShader             (std::string shader, std::string path);
    GLuint     getUniform               (const char *uniformNombre );
    GLuint     getParametros            (const char *parametros );
    void       usarPrograma             ();
    void       soltarPrograma           ();
    bool       estaCargadoShader        ();
    
    
    
};


#endif /* defined(__ZEnginePlus__zeShader__) */
