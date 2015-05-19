#include "image_persistent.h"

extern "C" {
void* getInstance() {
    return new ImagePersistent();
}
}
