cmake_minimum_required(VERSION 3.10)

include_directories(include)

add_subdirectory(lib)
add_subdirectory(include)

# add the executable
add_executable(SimpleFactory SimpleFactoryMain.cpp)

SET(PROGS
	OperationFactory
	OperationMinus
	OperationAdd
)
FOREACH(prog ${PROGS})
	TARGET_LINK_LIBRARIES(SimpleFactory
		${prog}
	)
ENDFOREACH()
