 class kQueues {

  vector<queue<int>> vecQ;
  int totalEle;

  public:
    kQueues(int n, int k) {
        
        vecQ.assign(k, queue<int>());
        totalEle = n;

    }

    void enqueue(int x, int i) {
        
        vecQ[i].push(x);
        totalEle--;
    }

    int dequeue(int i) {
        
        int ele;
        if(vecQ[i].empty())
            return -1;
        else {
            ele = vecQ[i].front();
            vecQ[i].pop();
            totalEle++;
        }
        
        return ele;
    }

    bool isEmpty(int i) {
        
        return (vecQ[i].empty());
    }

    bool isFull() {
        
        return (totalEle <= 0);
    }
};

