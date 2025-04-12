# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Kalkulatorek_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Kalkulatorek_autogen.dir\\ParseCache.txt"
  "Kalkulatorek_autogen"
  )
endif()
