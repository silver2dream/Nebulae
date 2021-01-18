cmake_minimum_required(VERSION 2.8.11)

set(PROJECT_NAME nebulae)
project(${PROJECT_NAME})

add_definitions(-std=c++11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin) # 執行檔
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib) # 共享程式庫
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib) # 靜態程式庫

#設置 Debug 後綴
set(CMAKE_DEBUG_POSTFIX -d)

file(GLOB src
	"*.cpp"
)

#編譯執行檔
add_executable(nebulae ${src})
#link lib 
#target_link_libraries(yumeko net)

#install
install(TARGETS nebulae
	RUNTIME DESTINATION	bin
	LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib/static
)
