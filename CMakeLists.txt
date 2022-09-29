project("Code jam")

cmake_minimum_required(VERSION 3.16)

include_directories(BEFORE ${CMAKE_CURRENT_SOURCE_DIR})

set(TARGETS solution)

SET(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -O0 -Wall -g3 -fPIC -DDEBUG")  
SET(CMAKE_C_FLAGS "$ENV{CXXFLAGS} -O0 -Wall -g3 -fPIC -DDEBUG")  

# Build acme
add_executable(${TARGETS} code.cpp)
target_link_libraries(${TARGETS} ${GLIB_LIBRARIES})

# Install executables
install(TARGETS ${TARGETS}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
