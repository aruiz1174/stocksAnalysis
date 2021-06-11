#include "Interval.h"
class YahooFinanceAPI
{
    public:
        YahooFinanceAPI();
        void set_interval(Interval interval);
        void set_col_name(std::string col_name);
        datatable::DataTable get_ticker_data(std::string ticker, 
            std::string start_date, std::string end_date, 
            bool keep_file=false);
        std::string download_ticker_data(std::string ticker, std::string
            start_date, std::string end_date);

    private:
        std::string _base_url;
        Interval _interval;
        std::string _col_name;

        std::string build_url(std::string ticker, std::string start_date,
            std::string end_date);
        bool string_replace(std::string& str, const std::string from,
            const std::string to);
        std::string timestamp_from_string(std::string date);
        void download_file(std::string url, std::string filename);
};
