#include <iostream>
#include <memory>

namespace SmartPointers
{

template <class _Ty>
class _unique_ptr
{

    _Ty *ptr;

  public:
    _unique_ptr()
    {
    }

    explicit _unique_ptr(_Ty *p)
        : ptr(p)
    {
    }

    _Ty &operator*()
    {
        return *ptr;
    }

    _Ty *operator->()
    {
        return ptr;
    }

    ~_unique_ptr()
    {
        std::cout << "Called the deconstructor\n";
        delete[] ptr;
    }

    _unique_ptr(_unique_ptr &p) = delete;
    _unique_ptr operator=(_unique_ptr &p) = delete;
};

void run(void)
{
    //!  OLD COMPLEX WAY
    int *ptr = new int(4);
    std::cout << *ptr << std::endl;
    delete ptr;

    //* New Way
    std::unique_ptr<int> u_ptr(new int(5));
    std::cout << *u_ptr << std::endl;

    {
        //* How to move ownership of a unique pointer
        std::unique_ptr<int> new_ptr(std::move(u_ptr));
        std::cout << *new_ptr << std::endl;
    }   //* new_ptr is now deleted

    //* Better way
    std::unique_ptr<int>
        n_ptr = std::make_unique<int>(4);
    std::cout << *n_ptr << std::endl;

    //* My Implementation
    _unique_ptr<int> o_ptr(new int(8));
    std::cout << *o_ptr << std::endl;
}

}   // namespace SmartPointers