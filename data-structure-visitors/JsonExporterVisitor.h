//
// Created by beloin on 16/06/2022.
//

#ifndef VISITOR_JSONEXPORTERVISITOR_H
#define VISITOR_JSONEXPORTERVISITOR_H


#include "ExportVisitor.h"

class JsonExporterVisitor : public ExportVisitor {
public:
    JsonExporterVisitor();

    const std::string &getCurrentRepresentation() const;

    void exportGraph(Graph *graph) override;
    void exportQueue(Queue *queue) override;
    void exportStack(Stack *stack) override;

private:
    std::string currentRepresentation;

};


#endif //VISITOR_JSONEXPORTERVISITOR_H
