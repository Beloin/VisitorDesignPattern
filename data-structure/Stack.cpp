//
// Created by beloin on 16/06/2022.
//

#include "Stack.h"

Stack::Stack(int itemCount, int topItem) : itemCount(itemCount), topItem(topItem) {}

int Stack::getItemCount() const {
    return itemCount;
}

int Stack::getTopItem() const {
    return topItem;
}

void Stack::accept(ExportVisitor *visitor) {
    visitor->exportStack(this);
}
