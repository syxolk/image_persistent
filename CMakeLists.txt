set(SOURCES
	"src/image_persistent.cpp"
	"src/interface.cpp"
)

set(HEADERS
	"include/image_persistent.h"
)

include_directories("include")

add_library(image_persistent SHARED ${SOURCES} ${HEADERS})
target_link_libraries(image_persistent PRIVATE lmscore imaging)
