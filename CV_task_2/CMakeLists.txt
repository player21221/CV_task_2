# CMakeList.txt : CMake project for CV_task_2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (CV_task_2 "CV_task_2.cpp" "CV_task_2.h")

# TODO: Add tests and install targets if needed.

find_package(OpenCV REQUIRED)
target_link_libraries(CV_task_2 ${OpenCV_LIBS})

find_package(Eigen3 CONFIG REQUIRED)
target_link_libraries(CV_task_2 Eigen3::Eigen)