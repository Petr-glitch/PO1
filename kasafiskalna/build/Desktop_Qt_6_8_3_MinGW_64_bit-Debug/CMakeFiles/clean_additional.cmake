# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\kasafiskalna_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\kasafiskalna_autogen.dir\\ParseCache.txt"
  "kasafiskalna_autogen"
  )
endif()
