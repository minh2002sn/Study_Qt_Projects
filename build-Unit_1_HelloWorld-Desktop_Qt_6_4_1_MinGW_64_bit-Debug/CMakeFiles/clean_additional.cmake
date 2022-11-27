# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Unit_1_HelloWorld_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Unit_1_HelloWorld_autogen.dir\\ParseCache.txt"
  "Unit_1_HelloWorld_autogen"
  )
endif()
