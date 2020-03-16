
#include <Rcpp.h>
#include <iso_week.h>

// Examples for the 'date' header library -- 'iso_week' component
// cf https://howardhinnant.github.io/date/iso_week.html

// The next line is needed with Rcpp::cppFunction().
// For a package use LinkingTo: instead.
//
// [[Rcpp::depends(RcppDate)]]

// [[Rcpp::export]]
void isoWeekExample() {
    using namespace iso_week::literals;

    auto iso_date = sat/51/2015;
    Rcpp::Rcout << iso_date << '\n';
}

/*** R
isoWeekExample()
*/