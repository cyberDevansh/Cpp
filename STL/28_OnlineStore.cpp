#include <iostream>
#include <vector>
#include <set>
#include <deque>
#include <list>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product
{
    int productId;
    string name;
    string category;
};

struct Order
{
    int OrderId;
    int ProductId;
    int quantity;
    string customerId;
    time_t orderDate;
};

int main()
{
    vector<Product> products = {
        {101,"Laptop","Electronics"},
        {102,"SmartPhone","Electronics"},
        {103,"Kettle","Kitchen"},
        {104,"Utensils","Kitchen"},
        {105,"StudyLamp","Home"},
        
    };

    deque<string> recentCustomers ={ "c01", "c02", "c03"};

    recentCustomers.push_back("C04");
    recentCustomers.push_front("C05");

    list<Order> orderHistory;
    orderHistory.push_back({1,101,1,"C001",time(0)});
    orderHistory.push_back({2,102,2,"C002",time(0)});
    orderHistory.push_back({3,103,3,"C003",time(0)});

    set<string> categories;

    for (const auto &product: products){
        categories.insert(product.category);
    }


    map<int , int> productStock ={
        {101,100},
        {102,10},
        {103,100},
        {104,11},
        {105,8},
    };

    multimap<string, Order> customerOrders;
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerId,order});
    }


    unordered_map<string, string> customerData={
        {"c001","Alice"},
        {"c002","Devansh"},
        {"c003","gopal"},
        {"c004","tulsi"},
        {"c005","Bittu"},
    };

    unordered_set<int> uniqueProductIds;
    for(const auto &product:products){
        uniqueProductIds.insert(product.productId);
    };

    return 0;
}