#include <iostream>

class Value{
    public:
        double scalar;
        Value(double eScalar) : scalar(eScalar){}

        Value operator+(const Value& other)const{
            return Value(this->scalar + other.scalar);
        }

        Value operator-(const Value& other)const{
            return Value(this->scalar - other.scalar);
        }

        Value operator*(const Value& other)const{
            return Value(this->scalar * other.scalar);
        }

        Value operator/(const Value& other)const{
            return Value(this->scalar / other.scalar);
        }

        Value operator-() const{
            return Value(-1 * scalar);
        }

};

Value operator+(double lhs, const Value& rhs){
    return Value(lhs + rhs.scalar);
}

Value operator-(double lhs, const Value& rhs){
    return Value(lhs - rhs.scalar);
}

Value operator*(double lhs, const Value& rhs){
    return Value(lhs * rhs.scalar);
}

Value operator/(double lhs, const Value& rhs){
    return Value(lhs / rhs.scalar);
}

int main(){
    Value a(4.0);
    Value b(5.0);
    Value c = a + b;
    Value d = a - b;
    Value e = a * b;
    Value f = a / b;
    Value g = a + 2;
    Value h = a/2;
    Value i = (a + b) * (a-b);
    Value j = -a;
    std::cout << c.scalar << std::endl;
    std::cout << d.scalar << std::endl;
    std::cout << e.scalar << std::endl;
    std::cout << f.scalar << std::endl;
    std::cout << g.scalar << std::endl;
    std::cout << h.scalar << std::endl;
    std::cout << i.scalar << std::endl;
    std::cout << j.scalar << std::endl;
    return 0;
}
