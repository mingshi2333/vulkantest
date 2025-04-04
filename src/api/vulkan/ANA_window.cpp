#include "ANA_window.h"

namespace ana
{

ANAwindow::ANAwindow(int w, int h, std::string name) : width(w), height(h), windowName(name)
{
    initWindow();
}

ANAwindow::~ANAwindow()
{
    glfwDestroyWindow(window);
    glfwTerminate();
}

void ANAwindow::initWindow()
{
    // glfw start
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
}
} // namespace ana