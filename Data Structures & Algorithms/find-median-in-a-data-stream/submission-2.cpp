class MedianFinder {
public:
vector<int>heap;
    MedianFinder() {
    }
    
    void addNum(int num) {
        heap.push_back(num);
        int i=heap.size()-1;

        while(i!=0 && heap[(i-1)/2] < heap[i])
        {
            swap(heap[(i-1)/2],heap[i]);
            i=(i-1)/2;
        }
    }
    
    double findMedian() {
        vector<int> temp =heap;
        sort_heap(temp.begin(), temp.end());

        int n= temp.size();

        if(n%2!=0)
            return temp[n/2];

        return (temp[n/2-1]+temp[n/2])/2.0;

    }
};
