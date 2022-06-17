//
// Created by beloin on 16/06/2022.
//

#include "Queue.h"

Queue::Queue(int itemCount, int fistItem) : itemCount(itemCount), fistItem(fistItem) {}

int Queue::getItemCount() const {
    return itemCount;
}

int Queue::getFistItem() const {
    return fistItem;
}

void Queue::accept(ExportVisitor *visitor) {
    visitor->exportQueue(this);
}
