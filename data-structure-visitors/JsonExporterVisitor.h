//
// Created by beloin on 16/06/2022.
//

#ifndef VISITOR_JSONEXPORTERVISITOR_H
#define VISITOR_JSONEXPORTERVISITOR_H


#include "ExportVisitor.h"
#include "Graph.h"
#include "Queue.h"
#include "Stack.h"

class JsonExporterVisitor : public ExportVisitor {
public:
    JsonExporterVisitor();

    const std::string &getCurrentRepresentation() const;

    void exportGraph(const Graph *graph) override;
    void exportQueue(const Queue *queue) override;
    void exportStack(const Stack *stack) override;

private:
    std::string currentRepresentation;

};


#endif //VISITOR_JSONEXPORTERVISITOR_H
