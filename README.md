
## RcppDate: date C++ header library for R

[![Build Status](https://travis-ci.org/eddelbuettel/rcppdate.svg)](https://travis-ci.org/eddelbuettel/rcppdate)
[![License](https://eddelbuettel.github.io/badges/GPL2+.svg)](http://www.gnu.org/licenses/gpl-2.0.html)

### About

The [date](https://github.com/HowardHinnant/date) library by Howard Hinnant
offers extensive date and time functionality for the C++11, C++14 and C++17
standards.  A slighly modified version of `date.h` has been accepted (along
with `tz.h`) as part of C++20.

This package regroups all header files from the upstream repository by Howard
Hinnant so that other R packages can use them in their C++ code.

### Example

There is _a lot_ of functionality in this library.  As a teaser, consider these three
compile-time instantiations of `year_month_day` types:

```c++
  constexpr auto x1 = 2015_y/March/22;
  constexpr auto x2 = March/22/2015;
  constexpr auto x3 = 22_d/March/2015;
```

See the file [inst/examples/year_month_day.cpp](inst/examples/year_month_day.cpp) for 
the complete example, and the upstream documentation for full details.

### Limitations

The `tz.h` header requires compiled support from
[`tz.cpp`](https://github.com/HowardHinnant/date/blob/master/src/tz.cpp)
which is not currently included so that this remains a header-only library.

### See Also

The [date](https://github.com/HowardHinnant/date) repository and its links to
documentation.

### Author

[date](https://github.com/HowardHinnant/date) was written by Howard Hinnant.

This package was put together by Dirk Eddelbuettel

### License

The underlying library is MIT licensed.

The packaging and integrations is licensed under GPL (>= 2).
