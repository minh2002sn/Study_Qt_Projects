# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Unit_2_SignalAndSlot_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Unit_2_SignalAndSlot_autogen.dir\\ParseCache.txt"
  "Unit_2_SignalAndSlot_autogen"
  )
endif()
