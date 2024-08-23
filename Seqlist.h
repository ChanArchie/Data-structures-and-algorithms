
#ifndef SEQLIST_H
#define SEQLIST_H
template <typename DataType> class Seqlist {
    public:
    Seqlist(int size);
    ~Seqlist();
    bool inserElement(DataType data);//向表尾插入元素
    bool deleteElement(int location);//删除指定位置的元素
    DataType getElement(int location);//返回指定位置的元素
    bool changeElement(int location,DataType newData);//修改指定位置的元素值
    private:
        DataType *elements;
        int maxSize;  //顺序表最大大小
        int length;
};



#endif //SEQLIST_H
