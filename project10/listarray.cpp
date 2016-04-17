#include <iostream>
using namespace std;

template <typename T>
class ListArray {
public:
    ListArray(int=10);
    ListArray(const ListArray<T>&);
    ~ListArray();

    bool insertBefore(const T&);
    bool insertAfter(const T&);
    bool get(T&) const;
    bool remove(T&);

    void clear();

    bool goToBeginning();
    bool goToEnd();

    bool goToNext();
    bool goToPrior();

    bool isEmpty() const;
    bool isFull() const;

    ListArray<T>& operator = (const ListArray<T>&);

    template <typename S>
    friend ostream& operator << (ostream&, const ListArray<S>&);

private:
    T *data;
    int cursor;
    int actual;
    int size;
};

template <typename T>
ListArray<T>::ListArray(int size) {
    this->data = new T[size];
    this->size = size;
    this->cursor = -1;
    this->actual = 0;
}

template <typename T>
ListArray<T>::ListArray(const ListArray<T>&) {

}

template <typename T>
ListArray<T>::~ListArray() {
    delete [] this->data;
    this->size = 0;
    this->cursor = -1;
    this->actual = 0;
}

template <typename T>
bool ListArray<T>::insertBefore(const T &toInsert) {
    if (!isFull()) {
        cursor--;

        if (isEmpty()) {

        } else {

        }
        return true;
    } else {
        return false;
    }
}

template <typename T>
bool ListArray<T>::insertAfter(const T &toInsert) {
    if (!isFull()) {
        cursor++;
        actual++;
        data[cursor] = toInsert;
        return true;
    } else {
        return false;
    }
}

template <typename T>
bool ListArray<T>::isEmpty() const {
    return actual == 0;
}

template <typename T>
bool ListArray<T>::isFull() const {
    return actual == size;
}

template <typename S>
ostream& operator << (ostream &fin, const ListArray<S> &toPrint) {
    for (int i = 0; i < toPrint.actual; i++) {
        if (i == (toPrint.cursor)) {
            fin << "[" << toPrint.data[i] << "] ";
        } else {
            fin << "|" << toPrint.data[i] << "| ";
        }
    }
    return fin;
}
