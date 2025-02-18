# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ProjetCity_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ProjetCity_autogen.dir\\ParseCache.txt"
  "ProjetCity_autogen"
  )
endif()
