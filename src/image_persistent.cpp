#include "image_persistent.h"

bool ImagePersistent::initialize() {
    inputImage = datamanager()->readChannel<lms::imaging::Image>(this, "INPUT_IMAGE");
    outputImage = datamanager()->writeChannel<lms::imaging::Image>(this, "OUTPUT_IMAGE");
    persistent = false;
    firstRun = true;
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

    if(firstRun || ! persistent) {
        // copy input to output image if in non persistent mode
        *outputImage = *inputImage;

        // otherwise do nothing
    }

    firstRun = false;

    return true;
}
