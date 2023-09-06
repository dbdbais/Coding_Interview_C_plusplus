#include "Person.h"

auto make_person(){
    std::string name; size_t age; size_t salary;
    std::cin >> name >> age >> salary;
    Person temp(name,age);
    return std::make_pair(temp,salary);
}

int main() {
    std::map<Person, size_t>  payroll;
    int N;
    std::cin >> N;
    for (int i=0; i < N; i++)
        payroll.insert(make_person());

    std::cout << "Sort By ID" << std::endl;
    for (const auto& [person, salary] : payroll)
        std::cout << person << " " << salary << std::endl;

    std::vector<std::pair<Person, size_t>> v_payroll(payroll.begin(), payroll.end());

    std::cout << "Sort By Age" << std::endl;
    std::sort(v_payroll.begin(),v_payroll.end(),[]
    (const auto& a,const auto&b){
        auto comparator = Person::ComparatorByAge();
        return comparator(a.first,b.first);
    });
    for(const auto& [person, salary] : v_payroll)
        std::cout << person<< " " << salary << std::endl;

    std::cout << "Sort By Name" << std::endl;
    std::sort(std::begin(v_payroll), std::end(v_payroll),
              [](const auto& lhs, const auto& rhs) {
                  auto Comparator = Person::ComparatorByName();
                  return Comparator(lhs.first, rhs.first);
              });
    for(const auto& [person, salary] : v_payroll)
        std::cout << person<< " " << salary << std::endl;

    std::cout << "Sort By Salary" << std::endl;
    std::sort(std::begin(v_payroll), std::end(v_payroll),
              [](const auto& lhs, const auto& rhs){
                  return lhs.second < rhs.second;
              });
    for(const auto& [person, salary] : v_payroll)
        std::cout << person<< " " << salary << std::endl;

    return 0;
}