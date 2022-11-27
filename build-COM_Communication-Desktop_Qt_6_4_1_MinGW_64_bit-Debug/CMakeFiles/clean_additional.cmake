# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\COM_Communication_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\COM_Communication_autogen.dir\\ParseCache.txt"
  "COM_Communication_autogen"
  )
endif()
