//
//  main.cpp
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 10/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#include <iostream>
#include "glfw3.h"
#include "ZEscenaController.h"


using namespace std;

#define SCREEN_ANCHO 800
#define SCREEN_ALTO 600


GLboolean ARRIBA = false;
GLboolean ABAJO = false;
GLboolean DERECHA = false;
GLboolean IZQUIERDA = false;
GLboolean KEY_Q = false;
GLboolean KEY_E = false;
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);

void error_callback(int error, const char* description)
{
    fputs(description, stderr);
}


int main(int argc, const char * argv[])
{

    if (!glfwInit())
    {
        printf("Error iniciando GLFW");
        exit(EXIT_FAILURE);
    }

    glfwSetErrorCallback(error_callback);
    
    GLFWwindow* window = glfwCreateWindow(SCREEN_ANCHO, SCREEN_ALTO, "xX Path Xx", NULL, NULL);
    
    
    if (!window)
    {
        
        printf("error al crear ventana.");
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    
    // Make the window's context current
    glfwMakeContextCurrent(window);
    
    
    cout << " OpenGL [ Version  ]: " << glGetString(GL_VERSION) << endl;
    cout << " OpenGL [ Vendor   ]: " << glGetString(GL_VENDOR) << endl;
    cout << " OpenGL [ Renderer ]: " << glGetString(GL_RENDERER) << endl;
    

    
    EscenaController escena;
    glfwSetKeyCallback(window, key_callback);
    
    while (!glfwWindowShouldClose(window))
    {
        escena.update();
        escena.draw();
 
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    

    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);

    
    
    return 0;
}


static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GL_TRUE);
    
    if (key == GLFW_KEY_A &&  (action == GLFW_REPEAT || action == GLFW_PRESS)) {
        IZQUIERDA = true;
    }else
        IZQUIERDA = false;
    
    if (key == GLFW_KEY_S &&   (action == GLFW_REPEAT || action == GLFW_PRESS)) {
        ABAJO = true;
    }else
        ABAJO = false;
    
    if (key == GLFW_KEY_D &&   (action == GLFW_REPEAT || action == GLFW_PRESS)) {
        DERECHA = true;
    }else
        DERECHA = false;
    
    if (key == GLFW_KEY_W &&   (action == GLFW_REPEAT || action == GLFW_PRESS)) {
        ARRIBA = true;
        
    }else{
        ARRIBA = false;
    }
    
    if (key == GLFW_KEY_Q &&  (action == GLFW_REPEAT || action == GLFW_PRESS) ) {
        KEY_Q = true;
    }else{
        KEY_Q = false;
    }
    
    
    if (key == GLFW_KEY_E  &&  (action == GLFW_REPEAT || action == GLFW_PRESS) ) {
        KEY_E = true;
    }else{
        KEY_E = false;
    }
    
    
}

