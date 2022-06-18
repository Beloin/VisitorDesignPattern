//
// Created by beloin on 16/06/2022.
//

#ifndef VISITOR_EXPORTVISITOR_H
#define VISITOR_EXPORTVISITOR_H


#include <string>

class Graph;
class Queue;
class Stack;

class ExportVisitor {
public:
    virtual void exportGraph(const Graph *graph) = 0;
    virtual void exportQueue(const Queue *queue) = 0;
    virtual void exportStack(const Stack *stack) = 0;
};


#endif //VISITOR_EXPORTVISITOR_H
