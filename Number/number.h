#include <ostream>



namespace number
{
    template<typename T>
    class Number
    {
    public:
        Number(T number);
        T getNumber()
        {
            return number_;
        }

        Number operator+(const Number& right) const
        {
            return Number(number_ + right.number_);
        }

        Number operator-(const Number& right) const
        {
            return Number(number_ - right.number_);
        }

        Number operator*(const Number& right) const
        {
            return Number(number_ * right.number_);
        }

        Number operator/(const Number& right) const
        {
            return Number(number_ / right.number_);
        }

    private:
        T number_;
    };

    const Number<int> ZERO = Number<int>(0);
    const Number<int> ONE = Number<int>(1);

    template<typename T>
    std::ostream& operator<<(std::ostream& out, Number<T> nmbr)
    {
        out << nmbr.getNumber();
        return out;
    }

    template<typename T>
    inline Number<T>::Number(T number) : number_(number) {};
}
