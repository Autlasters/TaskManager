set(MENU_LIB_SRC_DIR ${SRC_DIR}/MenuLib)
set(MENU_LIB_SRC ${MENU_LIB_SRC_DIR}/Menu.cpp)

add_library(MenuLib STATIC ${MENU_LIB_SRC})

set_target_properties(MenuLib PROPERTIES CXX_STANDARD 14
									CXX_STANDARD_REQUIRED ON)