# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Unit3_QString_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Unit3_QString_autogen.dir\\ParseCache.txt"
  "Unit3_QString_autogen"
  )
endif()
