#include <iostream>
#include <memory>

struct Node {
    int val;
    std::shared_ptr<Node> next;

    Node(int v, const std::shared_ptr<Node> & nx)
        : val(v), next(nx) {}
};

using pNode = std::shared_ptr<Node>;

pNode createList(const std::vector<int> & nums) {
    pNode head = nullptr;
    for (auto it = nums.rbegin(); it != nums.rend(); ++it)
        head = std::make_shared<Node>(*it, head);
    return head;
}

void printList(const pNode & node) {
    if (node != nullptr) {
        pNode p = node;
        while (p != nullptr) {
            std::cout << p->val << " ";
            p = p->next;
        }
        std::cout << std::endl;
    }
}

class solution {
  public:
    pNode reverseKGroup(const pNode & head, int k) {
        
    }
};

int main() {
    
}
