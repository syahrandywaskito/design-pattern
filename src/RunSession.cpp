#include "RunSession.h"

void RunSession::Start()
{

}

void RunSession::Update()
{
    /**
     * Game loop
     * 
     */

    while (GetExitCommand() != "exit")
    {
        std::cout << "Game loop running\n"; 
    }
    

    std::cout << "Game Loop end\n";
}

std::string RunSession::GetExitCommand()
{
    return exitCommand;
}

