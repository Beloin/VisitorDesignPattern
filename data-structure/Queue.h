//
// Created by beloin on 16/06/2022.
//

#ifndef VISITOR_QUEUE_H
#define VISITOR_QUEUE_H


#include "DataStructure.h"

class Queue : public DataStructure {
private:
    int itemCount;
    int fistItem;
public:
    Queue(int itemCount, int fistItem);

    int getItemCount() const;
    int getFistItem() const;

    void accept(ExportVisitor *visitor) override;
};


#endif //VISITOR_QUEUE_H
