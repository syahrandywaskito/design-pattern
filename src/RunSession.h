#pragma once

#include <iostream>

/**
 * Game Loop
 * 
 * Start 
 * Update
 * End
 * 
 */

class RunSession
{   
    private:
        std::string exitCommand = "";

    public:
        void Start();
        void Update();
        void End(); 

        // helper
        std::string GetExitCommand();
};