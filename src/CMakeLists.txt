
 
 include_directories("${PROJECT_SOURCE_DIR}/include"
	"${PROJECT_BINARY_DIR}")
 
# add the executable
add_executable(Demo main.cpp 
	view.cpp windowView.cpp terminalView.cpp
	model.cpp webcamModel.cpp storageModel.cpp
	controller.cpp vjAndFisherf.cpp)