#include <algorithm>
#include <iostream> 
#include <vector>

/*
int main()
{
  int numbers = /* INSIGHTS-TODO: CodeGenerator.cpp:4501 stmt: RecoveryExpr ;
  int factor = 2;
    
  class __lambda_14_15
  {
    public: 
    inline bool operator()(int a, int b) const
    {
      return (a % factor) < (b % factor);
    }
    
    private: 
    int factor;
    
    public:
    __lambda_14_15(int & _factor)
    : factor{_factor}
    {}
    
  };
  
  std::sort(/* INSIGHTS-TODO: CodeGenerator.cpp:4501 stmt: RecoveryExpr .begin(), /* INSIGHTS-TODO: CodeGenerator.cpp:4501 stmt: RecoveryExpr .end(), __lambda_14_15{factor});
  /* INSIGHTS-TODO: CodeGenerator.cpp:4501 stmt: RecoveryExpr ;
  return 0;
}
*/


int main () 
{
    // Lambda function syntax: [capture](parameters) -> return_type { body }
 
    std::vector<int> numbers = {1, 2, 3, 4, 5}; 
    int factor = 2; 

    std::sort(numbers.begin(), numbers.end(), 
              [factor](int a, int b) { return (a % factor) < (b % factor); });
    for (int n : numbers) {
        std::cout << n << " "; // Output: 2 4 1 3 5
    }
    std::cout << std::endl; 
    
    return 0;
}