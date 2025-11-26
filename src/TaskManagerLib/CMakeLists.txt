set(TASK_MANAGER_LIB_SRC_DIR ${SRC_DIR}/TaskManagerLib)
set(TASK_MANAGER_LIB_SRC ${TASK_MANAGER_LIB_SRC_DIR}/TaskManager.cpp)

add_library(TaskManagerLib STATIC ${TASK_MANAGER_LIB_SRC})

set_target_properties(TaskManagerLib PROPERTIES CXX_STANDARD 14
									CXX_STANDARD_REQUIRED ON)
target_link_libraries(TaskManagerLib TaskLib MenuLib)