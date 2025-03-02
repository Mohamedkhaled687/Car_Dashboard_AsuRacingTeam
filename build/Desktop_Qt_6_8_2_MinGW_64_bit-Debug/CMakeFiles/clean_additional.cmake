# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appCar_Dashboard_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appCar_Dashboard_autogen.dir\\ParseCache.txt"
  "appCar_Dashboard_autogen"
  )
endif()
