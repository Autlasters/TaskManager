set(TASK_LIB_SRC_DIR ${SRC_DIR}/TaskLib)
set(TASK_LIB_SRC ${TASK_LIB_SRC_DIR}/Task.cpp)

add_library(TaskLib STATIC ${TASK_LIB_SRC})

set_target_properties(TaskLib PROPERTIES CXX_STANDARD 14
									CXX_STANDARD_REQUIRED ON)

