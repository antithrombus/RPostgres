// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/rpq.h"
#include <Rcpp.h>

using namespace Rcpp;

// connect
XPtr<PqConnection> connect(std::vector<std::string> keys, std::vector<std::string> values);
RcppExport SEXP rpq_connect(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector<std::string> >::type keys(keysSEXP );
        Rcpp::traits::input_parameter< std::vector<std::string> >::type values(valuesSEXP );
        XPtr<PqConnection> __result = connect(keys, values);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// exec
void exec(XPtr<PqConnection> con, std::string query);
RcppExport SEXP rpq_exec(SEXP conSEXP, SEXP querySEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< XPtr<PqConnection> >::type con(conSEXP );
        Rcpp::traits::input_parameter< std::string >::type query(querySEXP );
        exec(con, query);
    }
    return R_NilValue;
END_RCPP
}
// exception_details
List exception_details(XPtr<PqConnection> con);
RcppExport SEXP rpq_exception_details(SEXP conSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< XPtr<PqConnection> >::type con(conSEXP );
        List __result = exception_details(con);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rows_affected
int rows_affected(XPtr<PqConnection> con);
RcppExport SEXP rpq_rows_affected(SEXP conSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< XPtr<PqConnection> >::type con(conSEXP );
        int __result = rows_affected(con);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// encrypt_password
String encrypt_password(String password, String user);
RcppExport SEXP rpq_encrypt_password(SEXP passwordSEXP, SEXP userSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type password(passwordSEXP );
        Rcpp::traits::input_parameter< String >::type user(userSEXP );
        String __result = encrypt_password(password, user);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
