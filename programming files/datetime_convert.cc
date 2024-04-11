#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{
    // setting date in type string
    std::string date_str = "2022-03-17 10:45:30";

    // initializing date object for the formatted date and time
    std::tm date_obj = {};

    // initializing a string stream from date_str.
    std::istringstream ss(date_str);

    // reading from the string stream into date object
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%M:%S");

    // reading from date the date object into the formatted stringstream
    std::stringstream formatted_date_ss;
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");

    // creating a string for the formatted date and printing to console
    std::string formatted_date = formatted_date_ss.str();
    std::cout << formatted_date << std::endl;

    return 0;
}
