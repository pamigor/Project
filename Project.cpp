#include <iostream>
#include <string>
#include <vector>

class IGraph {

public:

    virtual ~IGraph() {}
    IGraph() {};
    IGraph(IGraph* inOther) {};
    virtual void add_edge(int from, int to) = 0; 
    virtual bool has_edge(int from, int to) const = 0; 
    virtual int vertices_count() const = 0; 
    virtual void get_next_vertices(int vertex, std::vector<int>& vertices) const = 0; 
    virtual void get_prev_vertices(int vertex, std::vector<int>& vertices) const = 0; 
};

class ListGraph : public IGraph {
    std::vector<std::vector<int>> lgraph;
    int vertexNumber;

public:

    ListGraph(int n) {
        vertexNumber = n;
        for (int i = 0; i < n; i++) {
            std::vector<int>* list = new std::vector<int>;
            lgraph.push_back(*list);
        }
    }

    ListGraph(const ListGraph& inOther) {
        lgraph = inOther.lgraph;
        vertexNumber = inOther.vertexNumber;
    }

    ListGraph& operator = (const ListGraph& inOther) {
        if (this == &inOther) {
            return *this;
        }
        lgraph = inOther.lgraph;
        vertexNumber = inOther.vertexNumber;
        return *this;
    }

    ListGraph(ListGraph* inOther) {
        lgraph = inOther->lgraph;
        vertexNumber = inOther->vertexNumber;
    }

    ~ListGraph() {}

    int vertices_count() const {
        return vertexNumber;
    }

    void add_edge(int from, int to) {
        if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) {
            return;
        }
        lgraph[from].push_back(to);
    }

    bool has_edge(int from, int to) const {
        if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) {
            return false;
        }
        if (!lgraph[from].empty()) {
            for (int i = 0; i < lgraph[from].size(); i++) {
                if (lgraph[from][i] == to) {
                    return true;
                }
            }
        }
        return false;
    }

    void get_next_vertices(int vertex, std::vector<int>& vertices) const {
        if (vertex < 0 || vertex >= vertexNumber) {
            std::cout << "\nThere is no vertex with this number!\n";
            return;
        }
        for (int i = 0; i < lgraph[vertex].size(); i++) {
            vertices.push_back(lgraph[vertex][i]);
            std::cout << lgraph[vertex][i] << " ";
        }
        std::cout << "\n";
    }

    void get_prev_vertices(int vertex, std::vector<int>& vertices) const {
        if (vertex < 0 || vertex >= vertexNumber) {
            std::cout << "\nThere is no vertex with this number!\n";
            return;
        }
        for (int i = 0; i < vertexNumber; i++) {
            for (int j = 0; j < lgraph[i].size(); j++) {
                if (lgraph[i][j] == vertex) {
                    vertices.push_back(i);
                    std::cout << i << " ";
                }
            }
        }
        std::cout << "\n";

    }
};

class MatrixGraph : public IGraph {
    bool** mgraph;
    int vertexNumber;

public:

    MatrixGraph(int n) {
        mgraph = new bool* [vertexNumber = n];
        for (int i = 0; i < n; i++) {
            bool* row = mgraph[i] = new bool[n];
            for (int j = 0; j < n; j++) {
                row[j] = false;
            }
        }
    }

    MatrixGraph(const MatrixGraph& inOther) {
        mgraph = new bool* [inOther.vertexNumber];
        for (int i = 0; i < inOther.vertexNumber; i++) {
            mgraph[i] = new bool[inOther.vertexNumber];
        }
        for (int i = 0; i < inOther.vertexNumber; i++) {
            for (int j = 0; j < inOther.vertexNumber; j++) {
                mgraph[i][j] = inOther.mgraph[i][j];
            }
        }
        vertexNumber = inOther.vertexNumber;
    }

    MatrixGraph& operator = (const MatrixGraph& inOther) {
        if (this == &inOther) {
            return *this;
        }
        mgraph = new bool* [inOther.vertexNumber];
        for (int i = 0; i < inOther.vertexNumber; i++) {
            mgraph[i] = new bool[inOther.vertexNumber];
        }
        for (int i = 0; i < inOther.vertexNumber; i++) {
            for (int j = 0; j < inOther.vertexNumber; j++) {
                mgraph[i][j] = inOther.mgraph[i][j];
            }
        }
        vertexNumber = inOther.vertexNumber;
        return *this;
    }

    MatrixGraph(MatrixGraph* inOther) {
        mgraph = inOther->mgraph;
        vertexNumber = inOther->vertexNumber;
    }

    ~MatrixGraph() {
        for (int i = 0; i < vertexNumber; i++) {
            delete mgraph[i];
        }
        delete mgraph;
    }

    int vertices_count() const {
        return vertexNumber;
    }

    void add_edge(int from, int to) {
        if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) {
            return;
        }
        mgraph[from][to] = true;
    }

    bool has_edge(int from, int to) const {
        if (from < 0 || from >= vertexNumber || to < 0 || to >= vertexNumber) {
            return false;
        }
        return mgraph[from][to];
    }

    virtual void get_next_vertices(int vertex, std::vector<int>& vertices) const {
        if (vertex < 0 || vertex >= vertexNumber) {
            std::cout << "\nThere is no vertex with this number!\n";
            return;
        }
        for (int i = 0; i < vertexNumber; i++) {
            if (mgraph[vertex][i]) {
                vertices.push_back(i);
                std::cout << i << " ";
            }
        }
        std::cout << "\n";
    }

    void get_prev_vertices(int vertex, std::vector<int>& vertices) const {
        if (vertex < 0 || vertex >= vertexNumber) {
            std::cout << "\nThere is no vertex with this number!\n";
            return;
        }
        for (int i = 0; i < vertexNumber; i++) {
            if (mgraph[i][vertex]) {
                vertices.push_back(i);
                std::cout << i << " ";
            }
        }
        std::cout << "\n";
    }
};


void print_graph(const IGraph& g) {
    int n = g.vertices_count();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << (g.has_edge(i, j) ? '1' : '0') << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> vertices;

    ListGraph listGraph(5);
    listGraph.add_edge(0, 1);
    listGraph.add_edge(0, 3);
    listGraph.add_edge(1, 2);
    listGraph.add_edge(1, 3);
    listGraph.add_edge(1, 4);
    listGraph.add_edge(3, 2);
    listGraph.add_edge(4, 1);
    listGraph.add_edge(4, 4);
    std::cout << "Initial ListGraph:\n\n";
    print_graph(listGraph);
    listGraph.get_next_vertices(1, vertices);
    listGraph.get_prev_vertices(2, vertices);
    std::cout << "\n";


    MatrixGraph matrixGraph(5);
    matrixGraph.add_edge(0, 1);
    matrixGraph.add_edge(0, 3);
    matrixGraph.add_edge(1, 2);
    matrixGraph.add_edge(1, 3);
    matrixGraph.add_edge(1, 4);
    matrixGraph.add_edge(3, 2);
    matrixGraph.add_edge(4, 1);
    matrixGraph.add_edge(4, 4);
    std::cout << "Initial MatrixGraph:\n\n";
    print_graph(matrixGraph);
    matrixGraph.get_next_vertices(1, vertices);
    matrixGraph.get_prev_vertices(2, vertices);
    std::cout << "\n";

    MatrixGraph matrixGraph1(1);
    matrixGraph1 = MatrixGraph(matrixGraph);

    matrixGraph.add_edge(0, 4);

    print_graph(matrixGraph);
    print_graph(matrixGraph1);


}
