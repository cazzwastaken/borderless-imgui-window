add_executable(cheat-menu WIN32
    main.cpp
    gui.cpp
)

target_link_libraries(cheat-menu PRIVATE
    imgui
)

if(WIN32)
    target_link_libraries(cheat-menu PRIVATE d3d11 dxgi)
endif()
