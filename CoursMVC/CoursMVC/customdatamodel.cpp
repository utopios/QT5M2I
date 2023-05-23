#include "customdatamodel.h"

CustomDataModel::~CustomDataModel(){
    if(db_.isOpen()) {
        db_.close();
    }

}
