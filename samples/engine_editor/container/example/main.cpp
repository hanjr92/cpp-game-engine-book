﻿#define GLFW_INCLUDE_NONE

#include "app/application.h"
#include "app/application_standalone.h"

int main(void){
    Application::Init(new ApplicationStandalone());
    Application::Run();
    return 0;
}


