#include <cstdlib>

// Template to make the vector array of any type
template <typename T>
class Vector
{
    // Public access specifeir, so this can be accessed from outside of the class
public:
    // Constructor
    Vector()
        : Array{nullptr}, Size{0} {}

    // Destructor
    ~Vector()
    {
        delete[] this->Array;
        this->Array = nullptr;
        this->Size = 0;
    }

    // Obtaining the size of the vector
    size_t size() const
    {
        return this->Size;
    }

    // Return the element at specific index of the array
    T &operator[](size_t index) const
    {
        return this->Array[index];
    }

    // Overload = operator to assign one vector array to other
    void operator=(const Vector &source)
    {
        this->Size = source.size();
        delete[] this->Array;
        this->Array = new T[this->Size];
        for (size_t i{0}; i < this->Size; ++i)
            this->Array[i] = source.Array[i];
    }

    // push_back method to increase the size by one by adding the element
    void push_back(const T &source)
    {
        this->Size++;
        T *NewArray{new T[this->Size]};
        for (size_t i{0}; i < this->Size - 1; ++i)
            NewArray[i] = this->Array[i];
        NewArray[this->Size - 1] = source;
        delete[] this->Array;
        this->Array = NewArray;
    }

    // inset method to insert the elemnt at specific index by the incriment by one of size
    void insert(size_t index, const T &source)
    {
        this->Size++;
        T *NewArray{new T[this->Size]};
        for (size_t i{0}, j{0}; i < this->Size; ++i)
        {
            if (i == index)
            {
                NewArray[i] = source;
                continue;
            }
            NewArray[i] = this->Array[j++];
        }
        delete[] this->Array;
        this->Array = NewArray;
    }

    // erase method to delete the element at specific index and also decrease the size
    void erase(size_t index)
    {
        this->Size--;
        T *NewArray{new T[this->Size]};
        for (size_t i{0}, j{0}; i < this->Size + 1; ++i)
        {
            if (i == index)
                continue;
            NewArray[j++] = this->Array[i];
        }
        delete[] this->Array;
        this->Array = NewArray;
    }

    // sort method to sort the array in ascending order by bubble sort algorithm
    void sort()
    {
        for (size_t i{0}; i < this->Size - 1; ++i)
        {
            for (size_t j{i + 1}; j < this->Size; ++j)
            {
                if (this->Array[i] > this->Array[j])
                {
                    T temp = this->Array[i];
                    this->Array[i] = this->Array[j];
                    this->Array[j] = temp;
                }
            }
        }
    }

    // Clear function that erase the whole array
    void clear()
    {
        delete[] this->Array;
        this->Array = nullptr;
        this->Size = 0;
    }

    // Private access specifeir,  so this can be accessed only within the class's scope
private:
    T *Array;
    size_t Size;
};