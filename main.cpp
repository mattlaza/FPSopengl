// Include standard headers
#include <stdio.h>
#include <stdlib.h>

// Include GLEW. Always include it before gl.h and glfw.h, since it's a bit magic.
#include <GL/glew.h>

// Include GLFW
#include <GL/GLFW/glfw3.h>

// Include GLM
//#include <glm/glm.hpp>
//using namespace glm;


/* change view angle, exit upon ESC */
void key( GLFWwindow* window, int k, int s, int action, int mods )
{

}


/* new window size */
void reshape( GLFWwindow* window, int width, int height )
{
 
}

/* program & OpenGL initialization */
static void init(int argc, char *argv[])
{
 
}


/* program entry */
int main(int argc, char *argv[])
{
    GLFWwindow* window;
    int width, height;

    fprintf(stderr, "GLFW Initiating...");	
    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }
    fprintf(stderr, "done!\n");	
   
    glfwWindowHint(GLFW_DEPTH_BITS, 16);

    
    fprintf(stderr, "Window Initiating...");	
    window = glfwCreateWindow( 300, 300, "Game", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }
    fprintf(stderr, "done!\n");		

    // Set callback functions
   // glfwSetFramebufferSizeCallback(window, reshape);
    glfwSetKeyCallback(window, key);

    glfwMakeContextCurrent(window);
    glfwSwapInterval( 1 );

   // glfwGetFramebufferSize(window, &width, &height);
    reshape(window, width, height);

    // Parse command-line options
    init(argc, argv);

    // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // Draw gears
        //draw();

        // Update animation
       // animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    
    fprintf(stderr, "Terminating...");	
    glfwTerminate();
    fprintf(stderr, "done!\n");

    // Exit program
    exit( EXIT_SUCCESS );
}

