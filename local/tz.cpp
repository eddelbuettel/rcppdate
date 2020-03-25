#include <Rcpp.h>
#include <date.h>
#include <tz.h>

// Examples for the 'date' header library -- 'tz' component
// cf https://howardhinnant.github.io/date/tz.html

// The next line is needed with Rcpp::cppFunction().
// For a package use LinkingTo: instead.
//
// [[Rcpp::depends(RcppDate)]]

using namespace date;

// [[Rcpp::export]]
void tzExample() {
    using namespace date::literals;
    using namespace std::chrono_literals;
    auto meet_nyc = make_zoned("America/New_York", date::local_days{Monday[1]/May/2016} + 9h);
    auto meet_lon = make_zoned("Europe/London",    meet_nyc);
    auto meet_syd = make_zoned("Australia/Sydney", meet_nyc);
    Rcpp::Rcout << "The New York meeting is " << meet_nyc << '\n';
    Rcpp::Rcout << "The London   meeting is " << meet_lon << '\n';
    Rcpp::Rcout << "The Sydney   meeting is " << meet_syd << '\n';
}
