# CMakeList.txt: проект CMake для Lesson7; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Lesson7 "src/Lesson7.cpp" "Lesson7.h" "include/point.h" "include/tools.h" "src/tools.cpp" "src/point.cpp")
target_include_directories(Lesson7 PUBLIC include)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Lesson7 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
