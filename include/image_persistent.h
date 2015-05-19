#ifndef IMAGE_PERSISTENT_H
#define IMAGE_PERSISTENT_H

#include "lms/module.h"
#include "lms/datamanager.h"
#include "lms/imaging/image.h"

class ImagePersistent : public lms::Module {
public:
    bool initialize() override;
    bool deinitialize() override;
    bool cycle() override;
private:
    const lms::imaging::Image *inputImage;
    lms::imaging::Image *outputImage;

    bool persistent;
    bool firstRun;
};

#endif /* IMAGE_PERSISTENT_H */
