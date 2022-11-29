cmake_minimum_required(VERSION 3.5)
project(inippmodule VERSION 1.0.0)

add_library(inippmodule
    SHARED 
    main.cpp
    )

if(UNIX)
target_link_options(inippmodule PRIVATE -fPIC -Wl,-E --shared -rdynamic -ldl -ldpp)
add_compile_options(-fPIC -Wl,-E --shared -rdynamic -ldl -ldpp)
endif()
