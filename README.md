# Visitor Pattern

Export DataStructure objects as text representation. 

DataStructure:
 - accept(ExporterVisitor)

Graph extends DataStructure:
 - nodeCount
 - edgeCount

Queue extends DataStructure:
 - itemCount
 - firstItem

Stack extends DataStructure:
 - itemCount
 - topItem

ExporterVisitor:
 - exportGraph(Graph)
 - exportQueue(Queue)
 - exportStack(Stack)

XmlExporterVisitor extends ExporterVisitor  
JsonExporterVisitor extends ExporterVisitor

For development purposes, the Data structures are not fully implemented, so the exporter will only export low level 
of information.