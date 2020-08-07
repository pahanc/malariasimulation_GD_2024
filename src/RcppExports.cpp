// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "malariasimulation_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// create_mosquito_emergence_process_cpp
Rcpp::XPtr<process_t> create_mosquito_emergence_process_cpp(std::string mosquito, Rcpp::List odes, std::string unborn, std::string susceptible, std::string variety, double dpl);
RcppExport SEXP _malariasimulation_create_mosquito_emergence_process_cpp(SEXP mosquitoSEXP, SEXP odesSEXP, SEXP unbornSEXP, SEXP susceptibleSEXP, SEXP varietySEXP, SEXP dplSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type mosquito(mosquitoSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type odes(odesSEXP);
    Rcpp::traits::input_parameter< std::string >::type unborn(unbornSEXP);
    Rcpp::traits::input_parameter< std::string >::type susceptible(susceptibleSEXP);
    Rcpp::traits::input_parameter< std::string >::type variety(varietySEXP);
    Rcpp::traits::input_parameter< double >::type dpl(dplSEXP);
    rcpp_result_gen = Rcpp::wrap(create_mosquito_emergence_process_cpp(mosquito, odes, unborn, susceptible, variety, dpl));
    return rcpp_result_gen;
END_RCPP
}
// create_mosquito_infection_process_cpp
Rcpp::XPtr<process_t> create_mosquito_infection_process_cpp(const std::string mosquito, const std::string human, const std::vector<std::string>& states, const std::vector<std::string>& variables, const std::string& infection);
RcppExport SEXP _malariasimulation_create_mosquito_infection_process_cpp(SEXP mosquitoSEXP, SEXP humanSEXP, SEXP statesSEXP, SEXP variablesSEXP, SEXP infectionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type mosquito(mosquitoSEXP);
    Rcpp::traits::input_parameter< const std::string >::type human(humanSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type states(statesSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type variables(variablesSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type infection(infectionSEXP);
    rcpp_result_gen = Rcpp::wrap(create_mosquito_infection_process_cpp(mosquito, human, states, variables, infection));
    return rcpp_result_gen;
END_RCPP
}
// create_mosquito_model
Rcpp::XPtr<MosquitoModel> create_mosquito_model(std::vector<double> init, double beta, double de, double mue, double K0, double gamma, double dl, double mul, double dp, double mup, size_t total_M);
RcppExport SEXP _malariasimulation_create_mosquito_model(SEXP initSEXP, SEXP betaSEXP, SEXP deSEXP, SEXP mueSEXP, SEXP K0SEXP, SEXP gammaSEXP, SEXP dlSEXP, SEXP mulSEXP, SEXP dpSEXP, SEXP mupSEXP, SEXP total_MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type init(initSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type de(deSEXP);
    Rcpp::traits::input_parameter< double >::type mue(mueSEXP);
    Rcpp::traits::input_parameter< double >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type dl(dlSEXP);
    Rcpp::traits::input_parameter< double >::type mul(mulSEXP);
    Rcpp::traits::input_parameter< double >::type dp(dpSEXP);
    Rcpp::traits::input_parameter< double >::type mup(mupSEXP);
    Rcpp::traits::input_parameter< size_t >::type total_M(total_MSEXP);
    rcpp_result_gen = Rcpp::wrap(create_mosquito_model(init, beta, de, mue, K0, gamma, dl, mul, dp, mup, total_M));
    return rcpp_result_gen;
END_RCPP
}
// mosquito_model_step
void mosquito_model_step(Rcpp::XPtr<MosquitoModel> model, size_t total_M);
RcppExport SEXP _malariasimulation_mosquito_model_step(SEXP modelSEXP, SEXP total_MSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<MosquitoModel> >::type model(modelSEXP);
    Rcpp::traits::input_parameter< size_t >::type total_M(total_MSEXP);
    mosquito_model_step(model, total_M);
    return R_NilValue;
END_RCPP
}
// mosquito_model_get_states
std::vector<double> mosquito_model_get_states(Rcpp::XPtr<MosquitoModel> model);
RcppExport SEXP _malariasimulation_mosquito_model_get_states(SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<MosquitoModel> >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(mosquito_model_get_states(model));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP run_testthat_tests();

static const R_CallMethodDef CallEntries[] = {
    {"_malariasimulation_create_mosquito_emergence_process_cpp", (DL_FUNC) &_malariasimulation_create_mosquito_emergence_process_cpp, 6},
    {"_malariasimulation_create_mosquito_infection_process_cpp", (DL_FUNC) &_malariasimulation_create_mosquito_infection_process_cpp, 5},
    {"_malariasimulation_create_mosquito_model", (DL_FUNC) &_malariasimulation_create_mosquito_model, 11},
    {"_malariasimulation_mosquito_model_step", (DL_FUNC) &_malariasimulation_mosquito_model_step, 2},
    {"_malariasimulation_mosquito_model_get_states", (DL_FUNC) &_malariasimulation_mosquito_model_get_states, 1},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_malariasimulation(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
