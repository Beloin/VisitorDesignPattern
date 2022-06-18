//
// Created by beloin on 16/06/2022.
//

#include "string"
#include "JsonExporterVisitor.h"

void JsonExporterVisitor::exportGraph(const Graph *graph) {
    std::string jsonString = "{";

    jsonString += "\"edges\":";
    jsonString += std::to_string(graph->getEdgeCount()) + ",";

    jsonString += "\"nodes\":";
    jsonString += std::to_string(graph->getNodeCount());

    jsonString += "}";

    this->currentRepresentation = jsonString;
}

void JsonExporterVisitor::exportQueue(const Queue *queue) {
    std::string jsonString = "{";

    jsonString += "\"itemCount\":";
    jsonString += std::to_string(queue->getItemCount()) + ",";

    jsonString += "\"fistItem\":";
    jsonString += std::to_string(queue->getFistItem());

    jsonString += "}";

    this->currentRepresentation = jsonString;
}

void JsonExporterVisitor::exportStack(const Stack *stack) {
    std::string jsonString = "{";

    jsonString += "\"itemCount\":";
    jsonString += std::to_string(stack->getItemCount()) + ",";

    jsonString += "\"topItem\":";
    jsonString += std::to_string(stack->getTopItem());

    jsonString += "}";

    this->currentRepresentation = jsonString;
}

const std::string &JsonExporterVisitor::getCurrentRepresentation() const {
    return currentRepresentation;
}

JsonExporterVisitor::JsonExporterVisitor() = default;
