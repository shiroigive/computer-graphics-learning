set(MESH_LIB_ROOT "D:/meshlib-build/install" CACHE PATH "Path to MeshLib install directory")
set(MESH_LIB_CONFIG "Release" CACHE STRING "MeshLib library configuration, usually Release or Debug")

set(MESH_LIB_INCLUDE_DIR "${MESH_LIB_ROOT}/include")
set(MESH_LIB_LIBRARY_DIR "${MESH_LIB_ROOT}/lib/${MESH_LIB_CONFIG}")
set(MESH_LIB_DLL_DIR "${MESH_LIB_ROOT}/app/${MESH_LIB_CONFIG}")

if (EXISTS "${MESH_LIB_INCLUDE_DIR}" AND EXISTS "${MESH_LIB_LIBRARY_DIR}" AND EXISTS "${MESH_LIB_DLL_DIR}")
    file(GLOB MESH_LIB_LIBS CONFIGURE_DEPENDS "${MESH_LIB_LIBRARY_DIR}/*.lib")
    file(GLOB MESH_LIB_DLLS CONFIGURE_DEPENDS "${MESH_LIB_DLL_DIR}/*.dll")

    add_executable(meshlib_starter
        src/main.cpp
    )

    target_compile_features(meshlib_starter PRIVATE cxx_std_20)
    target_include_directories(meshlib_starter PRIVATE "${MESH_LIB_INCLUDE_DIR}")
    target_link_libraries(meshlib_starter PRIVATE ${MESH_LIB_LIBS})
    target_compile_options(meshlib_starter PRIVATE /bigobj /utf-8)
    target_compile_definitions(meshlib_starter PRIVATE
        SAMPLE_STL_PATH="${CMAKE_CURRENT_SOURCE_DIR}/assets/simple-triangle.stl"
    )

    add_custom_command(TARGET meshlib_starter POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different ${MESH_LIB_DLLS} $<TARGET_FILE_DIR:meshlib_starter>
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${CMAKE_CURRENT_SOURCE_DIR}/assets/simple-triangle.stl"
            "$<TARGET_FILE_DIR:meshlib_starter>/simple-triangle.stl"
    )
else()
    message(WARNING
        "MeshLib is not available. Skipping meshlib_starter. "
        "Set MESH_LIB_ROOT to your MeshLib install directory."
    )
endif()

