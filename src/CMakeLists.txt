file(GLOB_RECURSE HEADERS_TO_MOC ${CMAKE_SOURCE_DIR}/include/*.hpp)
qt6_wrap_cpp(template_moc
    ${HEADERS_TO_MOC}
    OPTIONS --no-notes # Don't display a note for the headers which don't produce a moc_*.cpp
)



add_executable(
        mainwindow

        ${template_moc}
        main.cpp
        mainwindow.cpp
    )
    
target_link_libraries(mainwindow
    PUBLIC
        Qt::Widgets
        Qt::Core
        CONAN_PKG::spdlog)

target_include_directories(
    mainwindow
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
    )

