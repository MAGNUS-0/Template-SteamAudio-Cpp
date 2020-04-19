cmake_minimum_required(VERSION 3.10)

project(SteamAudioExample)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/steamaudio_api/include)

link_directories(steamaudio_api/lib/OSX/)
file(GLOB SOURCES "src/*.cpp")
file(GLOB LIBRARIES "steamaudio_api/lib/OSX/*.dylib")

add_executable(SteamAudioExample ${SOURCES})
target_link_libraries(SteamAudioExample ${LIBRARIES})  
