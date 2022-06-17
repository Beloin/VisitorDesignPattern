//
// Created by beloin on 16/06/2022.
//

#ifndef VISITOR_EXPORTVISITOR_H
#define VISITOR_EXPORTVISITOR_H


#include <string>
#include <Graph.h>
#include <Queue.h>
#include <Stack.h>

class ExportVisitor {
public:
    virtual void exportGraph(Graph *graph) = 0;
    virtual void exportQueue(Queue *queue) = 0;
    virtual void exportStack(Stack *stack) = 0;
};


#endif //VISITOR_EXPORTVISITOR_H
