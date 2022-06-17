//
// Created by beloin on 16/06/2022.
//

#ifndef VISITOR_DATASTRUCTURE_H
#define VISITOR_DATASTRUCTURE_H

#include "../data-structure-visitors/ExportVisitor.h"

class DataStructure {
public:
    virtual void accept(ExportVisitor *visitor) = 0;
};


#endif //VISITOR_DATASTRUCTURE_H
