set(APP_SRC_DIR ${SRC_DIR}/Source)

set(APP_SRC ${APP_SRC_DIR}/source.cpp)

add_executable(source ${APP_SRC})

set_target_properties(source PROPERTIES CXX_STANDARD 14
									CXX_STANDARD_REQUIRED ON)

target_link_libraries(source TaskManagerLib)