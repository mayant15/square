// Derived from http://learnopengl.com/code_viewer.php?code=getting-started/hellowindow2

#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "constants.h"
#include "logger.h"

/*!
 * @brief Callback triggered on key press
 * https://www.glfw.org/docs/latest/input_guide.html#input_key
 * 
 * @param window Instance of the GLFW window
 * @param key Key pressed
 * @param scancode Platform specific unique scancode for the key
 * @param action Press/release/repeat
 * @param mods Modifier bits
 */
void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods);

int main()
{
    // Start GLFW
    LOGI("Starting GLFW context, OpenGL %d.%d", OPENGL_MAJOR_VERSION, OPENGL_MINOR_VERSION);
    glfwInit();

    // Set window options before creating it
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, OPENGL_MAJOR_VERSION);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, OPENGL_MINOR_VERSION);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create the window instance
    GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, "Dev Example | Square", nullptr, nullptr);
    glfwMakeContextCurrent(window);
    if (window == nullptr)
    {
        LOGE("Failed to create GLFW window");
        glfwTerminate();
        return EXIT_FAILURE;
    }

    // Set the input callback function
    glfwSetKeyCallback(window, key_callback);

    // Load OpenGL functions with GLAD
    int version = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
    if (version == 0)
    {
        LOGE("Failed to load OpenGL functions");
        glfwTerminate();
        return EXIT_FAILURE;
    }

    // Set viewport dimensions
    glViewport(0, 0, WIDTH, HEIGHT);

    // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Poll for input events
        glfwPollEvents();

        // Clear the colorbuffer
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap buffers
        glfwSwapBuffers(window);
    }

    // Shutdown
    glfwTerminate();
    return 0;
}

void key_callback(GLFWwindow *window, int key, int scancode, int action, int mode)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GL_TRUE);
}
