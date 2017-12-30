cmake_minimum_required(VERSION 3.2)

set(top_directory "${CMAKE_CURRENT_LIST_DIR}/../../../..")
include("${top_directory}/CMake/HunterGate.cmake")

HunterGate(
    URL "${HUNTER_HOST_URL}"
    SHA1 "${HUNTER_HOST_SHA1}"
    FILEPATH "${top_directory}/CMake/HunterConfig.cmake"
)

project(Urho3D-host)

hunter_add_package(toluapp)
