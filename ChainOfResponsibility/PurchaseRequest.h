#include <string>
using namespace std;
class PurchaseRequest
{
private:
    double amount;
    int number;
    string purpose;
public:
    PurchaseRequest(double amt, int num, const string &pp);
    void set_amount(double amt);
    void set_number(double num);
    void set_purpose(const string &pp);
    int get_amount()const;
    int get_number()const;
    string get_purpose()const;
};