// For numeric types (in this case anything except strings)
template <typename T>
class AddElements {
    T a;
    
public:
    AddElements(T a): a{a} {} 
    
    T add(T b) {
        return a + b;
    }    
};

// For string type (using template specialization)
template <>
class AddElements<string> {
    string a;
    
public:
    AddElements(string a): a{a} {}
    
    string concatenate(string b) {
        return a + b;
    }
};
