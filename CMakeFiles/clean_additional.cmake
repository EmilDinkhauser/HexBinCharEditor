# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\HEX_BIN_CHAR_Dateieditor_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HEX_BIN_CHAR_Dateieditor_autogen.dir\\ParseCache.txt"
  "HEX_BIN_CHAR_Dateieditor_autogen"
  )
endif()
