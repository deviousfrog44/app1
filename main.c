#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <stdio.h>

int main() {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4.6);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4.6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800,800,"Hello World",NULL,NULL);
    if (window==NULL) {printf("Failed to create GLFW window"); glfwTerminate(); return -1;}
    glfwMakeContextCurrent(window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){ printf("Failed to initialize GLAD"); return -1;}

    glViewport(0,0,800,800);

    while(!glfwWindowShouldClose(window)) {
	    glfwSwapBuffers(window);
	    glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}
