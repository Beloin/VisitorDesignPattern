//
// Created by beloin on 16/06/2022.
//

#ifndef VISITOR_STACK_H
#define VISITOR_STACK_H


#include "DataStructure.h"

class Stack : public DataStructure {
private:
    int itemCount;
    int topItem;

public:
    Stack(int itemCount, int topItem);

    int getItemCount() const;
    int getTopItem() const;

    void accept(ExportVisitor *visitor) override;
};


#endif //VISITOR_STACK_H
