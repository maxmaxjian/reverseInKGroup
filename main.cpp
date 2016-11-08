#include <iostream>
#include <memory>

struct Node {
    int val;
    std::shared_ptr<Node> next;

    Node(int v, const std::shared_ptr<Node> & nx)
        : val(v), next(nx) {}
};

using pNode = std::shared_ptr<Node>;

class solution {
  public:
    pNode reverseKGroup(const pNode & head, int k) {
        
    }
};

int main() {
    
}
