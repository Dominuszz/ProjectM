cmake_minimum_required(VERSION 3.23)
set(project "porject2121")
project(${project})
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.5.x)
FetchContent_MakeAvailable(SFML)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/player.png
        ${CMAKE_BINARY_DIR}/bin COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/background.png
        ${CMAKE_BINARY_DIR}/bin COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/border.png
        ${CMAKE_BINARY_DIR}/bin COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/eye_flight.png
        ${CMAKE_BINARY_DIR}/bin COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/bullet.png
        ${CMAKE_BINARY_DIR}/bin COPYONLY)

add_executable(${project}
        main.cpp

        Game/Sources/Bullet.cpp
        Game/Sources/Character.cpp
        Game/Sources/EnemiesManager.cpp
        Game/Sources/Enemy.cpp
        Game/Sources/GameObject.cpp
        Game/Sources/HealthBar.cpp
        Game/Sources/Player.cpp
        Game/Sources/PlayerController.cpp
        Game/Sources/RangedWeapon.cpp
        Game/Sources/Textures.cpp
        Game/Sources/Timer.cpp
        Game/Sources/ViewController.cpp
        Game/Sources/Weapon.cpp
        Game/Sources/World.cpp

        Game/Weapon/Bullet.h
        Game/Player/Player.h
        Game/Player/Textures.h
        Game/Engine/EnemiesManager.h
        Game/Enemies/Enemy.h
        Game/Engine/Character.h
        Game/Engine/Constants.h
        Game/Engine/GameObject.h
        Game/Engine/PlayerController.h
        Game/Engine/Timer.h
        Game/Engine/ViewController.h
        Game/Engine/World.h
        Game/UI/HealthBar.h
        Game/Weapon/RangedWeapon.h
        Game/Weapon/Weapon.h
        )
target_include_directories(${project} PRIVATE Game)
target_link_libraries(${project} PRIVATE sfml-graphics)
target_link_libraries(${project} PRIVATE sfml-audio)
target_link_libraries(${project} PRIVATE sfml-window)

if(WIN32)
    add_custom_command(
            TARGET ${project}
            COMMENT "Copy OpenAL DLL"
            PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:${project}>
            VERBATIM)
endif()

install(TARGETS ${project})

