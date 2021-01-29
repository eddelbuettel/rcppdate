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
## see the source files in the examples/ directory of the package
## check for (optional, only in Suggests:) Rcpp, and ensure we are
## not on Windows as this runs up to the ten second time limit
if (requireNamespace("Rcpp", quietly=TRUE) && (.Platform$OS.type != "windows")) {
    Rcpp::sourceCpp(system.file("examples", "year_month_day.cpp", package="RcppDate"))
}
}
