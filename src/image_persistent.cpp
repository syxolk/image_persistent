#include "image_persistent.h"

bool ImagePersistent::initialize() {
    inputImage = datamanager()->readChannel<lms::imaging::Image>(this, "INPUT_IMAGE");
    outputImage = datamanager()->writeChannel<lms::imaging::Image>(this, "OUTPUT_IMAGE");
    persistent = false;
    return true;
}

bool ImagePersistent::deinitialize() {
    return true;
}

bool ImagePersistent::cycle() {
    for(const std::string &m : messaging()->receive("image_persistent")) {
        if(m == "toggle") {
            persistent = ! persistent;
        }
    }

    if(! persistent) {
        // copy input to output image if in non persistent mode
        *outputImage = *inputImage;

        // otherwise do nothing
    }

    return true;
}
