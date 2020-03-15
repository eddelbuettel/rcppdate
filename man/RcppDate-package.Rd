\name{RcppDate-package}
\alias{RcppDate-package}
\alias{RcppDate}
\docType{package}
\title{\packageTitle{RcppDate}}
\description{\packageDescription{RcppDate}}
\section{Package Content}{\packageIndices{RcppDate}}
\author{\packageAuthor{RcppDate}}
\section{Maintainer}{\packageMaintainer{RcppDate}}
\keyword{package}
\examples{
  if (requireNamespace("Rcpp", quietly=TRUE)) {
    ## see the source file in the examples/ directory of the package
    Rcpp::sourceCpp(system.file("examples", "year_month_day.cpp", package="RcppDate"))
  }
}
