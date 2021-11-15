#include "BoxController.h"

BoxController::BoxController(QGCApplication* app, QGCToolbox* toolbox)
    : QGCTool(app, toolbox)
{
}

void BoxController::PrintHelloWorld()
{
    printf("Screw this class.");
}
