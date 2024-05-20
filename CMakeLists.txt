cmake_minimum_required(VERSION 3.23)
set(project "porject2121")
project(${project})
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static -static-libgcc")
set(SFML_STATIC_LIBRARIES TRUE)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/player.png
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/background.png
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/border.png
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/eye_flight.png
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/bullet.png
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

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
set(SFML_DIR "C:\\Users\\Dominus\\CLionProjects\\porject2121\\SFML\\lib\\cmake\\SFML")
target_link_libraries(${project} sfml-graphics sfml-window)


set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML 2.5 REQUIRED graphics network audio window system)