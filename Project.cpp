#include <algorithm>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <conio.h>
#include <cpr/cpr.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque> 
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <locale.h>
#include <map>
#include <math.h>
#include <set>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <thread>
#include <vector>
#include <cwchar>
typedef unsigned short WORD;

class EdgeGraph;
class SetGraph;
class ListGraph;
class MatrixGraph;

class IGraph {

public:

    virtual ~IGraph() {}
    IGraph() {};
    IGraph(IGraph* inOther) {};
    virtual void add_edge(int from, int to) = 0; // Метод принимает вершины начала и конца ребра и добавляет ребро
    virtual int VerticesCount() const = 0; // Метод должен считать текущее количество вершин
    virtual void GetNextVertices(int vertex, std::vector<int>& vertices) const = 0; 
    // Для конкретной вершины метод выводит в вектор “вершины” все вершины, в которые можно дойти по ребру из данной
    virtual void GetPrevVertices(int vertex, std::vector<int>& vertices) const = 0; 
    // Для конкретной вершины метод выводит в вектор “вершины” все вершины, из которых можно дойти по ребру в данную
    virtual int get_vertex_number() const = 0;
};

template <class A>
class List {
    friend EdgeGraph* convert(const ListGraph& srcGraph) {};

    struct ListItem {
        A item;
        ListItem* next;
        ListItem(const A& inItem, LIstItem* inNext = NULL) : item(inItem), next(inNext) {}
    };

    ListItem* first, *last;
    int listCount;

public:

    List() {
        first = last = NULL;
    }

    ~List() {};

    void add(const A& item) {
        LIstItem* newItem = new LIstItem(item);
        if (last) {
            last->next = newItem;
        }
        else {
            first = newItem;
        }
        last = newItem;
        listCount++;
    }

    bool has(const A& item) const {
        for (LIstItem* current = first; current; current = current->next) {
            if (current->item == item) {
                return true;
            }
        }
        return false;
    }
};

class ListGraph : public IGraph {
    friend ListGraph* convert(const SetGraph& srcGraph) {};
    friend EdgeGraph* convert(const ListGraph& srcGraph) {};
    List<int>* graph;
    int vertexNumber;

public:

    ListGraph(int n) : vertexNumber(n), graph(new List<int>[n]) {}

    ~ListGraph() {
        delete graph;
    }

    int get_vertex_number() const {
        return vertexNumber;
    }

    void add_edge(int from, int to) {
        if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) {
            return;
        }
        graph[from].add(to);
    }

    bool has_edge(int from, int to) const {
        if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) {
            return false;
        }
        return graph[from].has(to);
    }
};

class MatrixGraph : public IGraph {
    friend MatrixGraph* convert(const EdgeGraph& srcGraph) {};
    friend SetGraph* convert(const MatrixGraph& srcGraph) {};
    bool** graph;
    int vertexNumber;

public:

    MatrixGraph(int n) {
        graph = new bool* [vertexNumber = n];
        for (int i = 0; i < n; i++) {
            bool* row = graph[i] = new bool[n];
            for (int j = 0; j < n; j++) {
                row[j] = false;
            }
        }
    }

    ~MatrixGraph() {
        for (int i = 0; i < vertexNumber; i++) {
            delete graph[i];
        }
        delete graph;
    }

    int get_vertex_number() const {
        return vertexNumber;
    }

    void add_edge(int from, int to) {
        if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) {
            return;
        }
        graph[from][to] = true;
    }

    bool has_edge(int from, int to) const {
        if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) {
            return false;
        }
        return graph[from][to];
    }
};

class Set {
    int minElement;
    int maxElement;
    WORD* elements;
    int numWords;

    friend const Set& operator | (const Set& s1, const Set& s2) {};
    friend const Set& operator & (const Set& s1, const Set& s2) {};
    friend const Set& operator - (const Set& s1, const Set& s2) {};
    friend const Set& operator - (const Set& s) {};

public:

    Set(int min = 0, int max = 255) {};
    Set(const Set& s) {};
    ~Set() {};

    bool has(int n) const {};
    Set& operator |= (int n) {};
    Set& operator |= (const Set& other) {};
    Set& operator &= (const Set& other) {};
    Set& operator -= (int n) {};
    Set& operator -= (const Set& other) {};
    Set& inverse() {};
};

class SetGraph : public IGraph {
    friend SetGraph* convert(const MatrixGraph& srcGraph) {};
    friend ListGraph* convert(const SetGraph& srcGraph) {};
    Set** graph;
    int vertexNumber;

public:

    SetGraph(int n) : vertexNumber(n), graph(new Set*[n]) {
        for (int i = 0; i < n; i++) {
            graph[i] = new Set(0, n);
        }
    }

    ~SetGraph() {
        for (int i = 0; i < vertexNumber; i++) {
            delete graph[i];
        }
        delete graph;
    }

    int get_vertex_number() const {
        return vertexNumber;
    }

    void add_edge(int from, int to) {
        if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) {
            return;
        }
        *graph[from] |= to;
    }

    bool has_edge(int from, int to) const {
        if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) {
            return false;
        }
        return graph[from]->has(to);
    }
};

class EdgeGraph : public IGraph {
    friend MatrixGraph* convert(const EdgeGraph& srcGraph) {}

    struct Edge {
        int begin, end;
        Edge* next;
        Edge(int inBegin, int inEnd, Edge* inNext = NULL) : begin(inBegin), end(inEnd), next(inNext) {}
    };
    Edge* first, *last;
    int edgeCount;
    int vertexNumber;
    friend MatrixGraph* convert(const EdgeGraph& srcGraph) {}

public:

    EdgeGraph(int n) : first(0), last(0), edgeCount(0), vertexNumber(n) {}
    
    /*virtual*/ ~EdgeGraph() {
        Edge* current = first, * prev = NULL;
        while (current) {
            prev = current;
            current = current->next;
            delete prev;
        }
    }

    int get_vertex_number() const {
        return vertexNumber;
    }

    Edge* get_first() {
        return first;
    }

    void add_edge(int from, int to) {
        if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) {
            return;
        }
        Edge* newEdge = new Edge(from, to);
        if (last) {
            last->next = newEdge;
        }
        else {
            first = newEdge;
        }
        last = newEdge;
        edgeCount++;
    }

    bool has_edge(int from, int to) const {
        for (Edge* current = first; current; current = current->next) {
            if (current->begin == from && current->end == to) {
                return true;
            }
        }
        return false;
    }
};

MatrixGraph* convert(const EdgeGraph& srcGraph) {
    int n = srcGraph.get_vertex_number();
    MatrixGraph* destGraph = new MatrixGraph(n);
    for (EdgeGraph::Edge* current = srcGraph.first; current; current = current->next) {
        destGraph->graph[current->begin][current->end] = true;
    }
    return destGraph;
}

SetGraph* convert(const MatrixGraph& srcGraph) {
    int n = srcGraph.get_vertex_number();
    SetGraph* destGraph = new SetGraph(n);
    for (int i = 0; i < n; i++) {
        bool* srcRow = srcGraph.graph[i];
        Set& destRow = *destGraph->graph[i];
        for (int j = 0; j < n; j++) {
            if (srcRow[j]) {
                destRow |= j;
            }
        }
    }
    return destGraph;
}

ListGraph* convert(const SetGraph& srcGraph) {
    int n = srcGraph.get_vertex_number();
    ListGraph* destGraph = new ListGraph(n);
    for (int i = 0; i < n; i++) {
        Set* srcRow = *srcGraph.graph[i];
        List<int>& destRow = destGraph->graph[i];
        for (int j = 0; j < n; j++) {
            if (srcRow.has(j)) {
                destRow.add(j);
            }
        }
    }
    return destGraph;
}

EdgeGraph* convert(const ListGraph& srcGraph) {
    int n = srcGraph.get_vertex_number();
    EdgeGraph* destGraph = new EdgeGraph(n);
    for (int i = 0; i < n; i++) {
        List<int>::ListItem* current = srcGrapf.graph[i].first;
        while (current) {
            destGraph->add_edge(i, current->item);
            current = current->next;
        }
    }
    return destGraph;
}

int main() {
	std::cout << "Hello";
}
