#include <Rcpp.h>
#include <date.h>

// Examples for the 'date' header library
// cf https://howardhinnant.github.io/date/date.html

// The next line is needed with Rcpp::cppFunction(). 
// For a package use LinkingTo: instead.
//
// [[Rcpp::depends(RcppDate)]]

using namespace date;

Rcpp::Date makeDate(const year_month_day & ymd) {
  return Rcpp::Date(static_cast<int32_t>(ymd.year()), 
                    static_cast<uint32_t>(ymd.month()), 
                    static_cast<uint32_t>(ymd.day()));
}

// [[Rcpp::export]]
Rcpp::DateVector ymdExample(bool verbose=false) {

  constexpr auto x1 = 2015_y/March/22;
  constexpr auto x2 = March/22/2015;
  constexpr auto x3 = 22_d/March/2015;
  
  if (verbose) {
    Rcpp::Rcout << x1 << " " << x2 << " " << x3 << std::endl;
    Rcpp::Rcout << x1.year() << " " << x1.month() << " " << x1.day() << std::endl;
  }
  
  return Rcpp::DateVector::create(makeDate(x1), makeDate(x2), makeDate(x3));
}


// [[Rcpp::export]]
Rcpp::DateVector ymdlExample(bool verbose=false) {
  
  constexpr auto x1 = 2015_y/February/last;
  constexpr auto x2 = February/last/2015;
  constexpr auto x3 = last/February/2015;

  return Rcpp::DateVector::create(makeDate(x1), makeDate(x2), makeDate(x3));
}

// [[Rcpp::export]]
Rcpp::DateVector ymwdExample(bool verbose=false) {
  
  constexpr auto x1 = 2015_y/March/Sunday[4];
  constexpr auto x2 = March/Sunday[4]/2015;
  constexpr auto x3 = Sunday[4]/March/2015;

  return Rcpp::DateVector::create(makeDate(year_month_day{x1}), 
                                  makeDate(year_month_day{x2}), 
                                  makeDate(year_month_day{x3}));
}

// [[Rcpp::export]]
Rcpp::DateVector ymwdlExample(bool verbose=false) {

  constexpr auto x1 = 2015_y/March/Sunday[last];
  constexpr auto x2 = March/Sunday[last]/2015;
  constexpr auto x3 = Sunday[last]/March/2015;
  
  return Rcpp::DateVector::create(makeDate(year_month_day{x1}), 
                                  makeDate(year_month_day{x2}), 
                                  makeDate(year_month_day{x3}));
}

/*** R
ymdExample()
ymdlExample()
ymwdExample()
ymwdlExample()
*/
