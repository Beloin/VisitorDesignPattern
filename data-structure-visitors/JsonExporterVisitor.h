//
// Created by beloin on 16/06/2022.
//

#ifndef VISITOR_JSONEXPORTERVISITOR_H
#define VISITOR_JSONEXPORTERVISITOR_H


#include "ExportVisitor.h"
#include <Graph.h>
#include <Queue.h>
#include <Stack.h>


class JsonExporterVisitor : ExportVisitor {
    std::string exportGraph(Graph *graph) override;
    std::string exportQueue(Queue *queue) override;
    std::string exportStack(Stack *stack) override;
};


#endif //VISITOR_JSONEXPORTERVISITOR_H
