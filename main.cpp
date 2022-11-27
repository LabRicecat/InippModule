#include "../inc/meowscript.hpp"
#include "../catmods/inipp/Inipp.h"

MEOWSCRIPT_MODULE

class IniModule {
public:
    IniModule() {
        Module ini_module;
        ini_module.name = "inipp";
        ini_module.add_command(
            {"test",
                {

                },
            [](std::vector<GeneralTypeToken> args)->GeneralTypeToken {
                std::cout << "WOOOOO!\n";
                return general_null;
            }}   
        );

        add_module(ini_module);
    }
}static ini_module;