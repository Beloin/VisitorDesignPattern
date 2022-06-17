//
// Created by beloin on 16/06/2022.
//

#ifndef VISITOR_EXPORTVISITOR_H
#define VISITOR_EXPORTVISITOR_H


#include <Graph.h>
#include <Queue.h>
#include <Stack.h>
#include <string>

class ExportVisitor {
public:
    virtual std::string exportGraph(Graph *graph) = 0;
    virtual std::string exportQueue(Queue *queue) = 0;
    virtual std::string exportStack(Stack *stack) = 0;
};


#endif //VISITOR_EXPORTVISITOR_H
