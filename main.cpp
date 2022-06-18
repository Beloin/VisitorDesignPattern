//
// Created by beloin on 16/06/2022.
//

#include <Graph.h>
#include <Queue.h>
#include <Stack.h>
#include <iostream>
#include "data-structure-visitors/JsonExporterVisitor.h"

int main() {
    auto graph = new Graph(14, 20);
    auto queue = new Queue(12, 455);
    auto stack = new Stack(56, 9696);

    ExportVisitor *jsonExporterVisitor = new JsonExporterVisitor();

    graph->accept(jsonExporterVisitor);
    std::cout << "Graph JSON Representation: " << ((JsonExporterVisitor *) jsonExporterVisitor)->getCurrentRepresentation() << std::endl;
    queue->accept(jsonExporterVisitor);
    std::cout << "Queue JSON Representation: " << ((JsonExporterVisitor *) jsonExporterVisitor)->getCurrentRepresentation() << std::endl;
    stack->accept(jsonExporterVisitor);
    std::cout << "Stack JSON Representation: " << ((JsonExporterVisitor *) jsonExporterVisitor)->getCurrentRepresentation() << std::endl;


    return 0;
}