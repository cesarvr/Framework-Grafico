//
//  main.cpp
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 10/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#include <iostream>
#include "glfw3.h"

using namespace std;

#define SCREEN_ANCHO 800
#define SCREEN_ALTO 600




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
    
    GLFWwindow* window = glfwCreateWindow(SCREEN_ANCHO, SCREEN_ALTO, "Taller", NULL, NULL);
    
    
    if (!window)
    {
        
        printf("error al crear ventana.");
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    
    // Make the window's context current
    glfwMakeContextCurrent(window);
    
    //  printf("\n version: %s \n", glfwGetVersionString());
    printf("\n OpenGL [version]: %s ", glGetString(GL_VERSION));
    printf("\n OpenGL [vendor]: %s \n",glGetString(GL_VENDOR));
    

    
    
    while (!glfwWindowShouldClose(window))
    {
 
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    

    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);

    
    
    return 0;
}

