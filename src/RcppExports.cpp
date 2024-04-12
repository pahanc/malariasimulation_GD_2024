// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "malariasimulation_types.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// create_adult_mosquito_model
Rcpp::XPtr<AdultMosquitoModel> create_adult_mosquito_model(Rcpp::XPtr<AquaticMosquitoModel> growth_model, double mu, double tau, std::vector<double> mosq_suppression, std::vector<double> mosq_seasonality,double susceptible, double foim);
RcppExport SEXP _malariasimulation_create_adult_mosquito_model(SEXP growth_modelSEXP, SEXP muSEXP, SEXP tauSEXP,SEXP mosq_suppressionSEXP, SEXP mosq_seasonalitySEXP, SEXP susceptibleSEXP, SEXP foimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<AquaticMosquitoModel> >::type growth_model(growth_modelSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type mosq_suppression(mosq_suppressionSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type mosq_seasonality(mosq_seasonalitySEXP);
    Rcpp::traits::input_parameter< double >::type susceptible(susceptibleSEXP);
    Rcpp::traits::input_parameter< double >::type foim(foimSEXP);
    rcpp_result_gen = Rcpp::wrap(create_adult_mosquito_model(growth_model, mu, tau,mosq_suppression, mosq_seasonality, susceptible, foim));
    return rcpp_result_gen;
END_RCPP
}
// adult_mosquito_model_update
void adult_mosquito_model_update(Rcpp::XPtr<AdultMosquitoModel> model, double mu, double foim,std::vector<double> mosq_suppression, std::vector<double> mosq_seasonality, double susceptible, double f);
RcppExport SEXP _malariasimulation_adult_mosquito_model_update(SEXP modelSEXP, SEXP muSEXP, SEXP foimSEXP,SEXP mosq_suppressionSEXP, SEXP mosq_seasonalitySEXP, SEXP susceptibleSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<AdultMosquitoModel> >::type model(modelSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type foim(foimSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type mosq_suppression(mosq_suppressionSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type mosq_seasonality(mosq_seasonalitySEXP);
    Rcpp::traits::input_parameter< double >::type susceptible(susceptibleSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    adult_mosquito_model_update(model, mu, foim,mosq_suppression, mosq_seasonality, susceptible, f);
    return R_NilValue;
END_RCPP
}
// create_adult_solver
Rcpp::XPtr<Solver> create_adult_solver(Rcpp::XPtr<AdultMosquitoModel> model, std::vector<double> init, double r_tol, double a_tol, size_t max_steps);
RcppExport SEXP _malariasimulation_create_adult_solver(SEXP modelSEXP, SEXP initSEXP, SEXP r_tolSEXP, SEXP a_tolSEXP, SEXP max_stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<AdultMosquitoModel> >::type model(modelSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type init(initSEXP);
    Rcpp::traits::input_parameter< double >::type r_tol(r_tolSEXP);
    Rcpp::traits::input_parameter< double >::type a_tol(a_tolSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_steps(max_stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(create_adult_solver(model, init, r_tol, a_tol, max_steps));
    return rcpp_result_gen;
END_RCPP
}
// create_aquatic_mosquito_model
Rcpp::XPtr<AquaticMosquitoModel> create_aquatic_mosquito_model(double beta, double de, double mue, Rcpp::XPtr<Timeseries> k_timeseries, double gamma, double dl, double mul, double dp, double mup, size_t total_M, bool model_seasonality, double g0, std::vector<double> g, std::vector<double> h, double R_bar, double mum, double f, double rainfall_floor);
RcppExport SEXP _malariasimulation_create_aquatic_mosquito_model(SEXP betaSEXP, SEXP deSEXP, SEXP mueSEXP, SEXP k_timeseriesSEXP, SEXP gammaSEXP, SEXP dlSEXP, SEXP mulSEXP, SEXP dpSEXP, SEXP mupSEXP, SEXP total_MSEXP, SEXP model_seasonalitySEXP, SEXP g0SEXP, SEXP gSEXP, SEXP hSEXP, SEXP R_barSEXP, SEXP mumSEXP, SEXP fSEXP, SEXP rainfall_floorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type de(deSEXP);
    Rcpp::traits::input_parameter< double >::type mue(mueSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<Timeseries> >::type k_timeseries(k_timeseriesSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type dl(dlSEXP);
    Rcpp::traits::input_parameter< double >::type mul(mulSEXP);
    Rcpp::traits::input_parameter< double >::type dp(dpSEXP);
    Rcpp::traits::input_parameter< double >::type mup(mupSEXP);
    Rcpp::traits::input_parameter< size_t >::type total_M(total_MSEXP);
    Rcpp::traits::input_parameter< bool >::type model_seasonality(model_seasonalitySEXP);
    Rcpp::traits::input_parameter< double >::type g0(g0SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type g(gSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type R_bar(R_barSEXP);
    Rcpp::traits::input_parameter< double >::type mum(mumSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    Rcpp::traits::input_parameter< double >::type rainfall_floor(rainfall_floorSEXP);
    rcpp_result_gen = Rcpp::wrap(create_aquatic_mosquito_model(beta, de, mue, k_timeseries, gamma, dl, mul, dp, mup, total_M, model_seasonality, g0, g, h, R_bar, mum, f, rainfall_floor));
    return rcpp_result_gen;
END_RCPP
}
// aquatic_mosquito_model_update
void aquatic_mosquito_model_update(Rcpp::XPtr<AquaticMosquitoModel> model, size_t total_M, double f, double mum);
RcppExport SEXP _malariasimulation_aquatic_mosquito_model_update(SEXP modelSEXP, SEXP total_MSEXP, SEXP fSEXP, SEXP mumSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<AquaticMosquitoModel> >::type model(modelSEXP);
    Rcpp::traits::input_parameter< size_t >::type total_M(total_MSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    Rcpp::traits::input_parameter< double >::type mum(mumSEXP);
    aquatic_mosquito_model_update(model, total_M, f, mum);
    return R_NilValue;
END_RCPP
}
// create_aquatic_solver
Rcpp::XPtr<Solver> create_aquatic_solver(Rcpp::XPtr<AquaticMosquitoModel> model, std::vector<double> init, double r_tol, double a_tol, size_t max_steps);
RcppExport SEXP _malariasimulation_create_aquatic_solver(SEXP modelSEXP, SEXP initSEXP, SEXP r_tolSEXP, SEXP a_tolSEXP, SEXP max_stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<AquaticMosquitoModel> >::type model(modelSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type init(initSEXP);
    Rcpp::traits::input_parameter< double >::type r_tol(r_tolSEXP);
    Rcpp::traits::input_parameter< double >::type a_tol(a_tolSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_steps(max_stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(create_aquatic_solver(model, init, r_tol, a_tol, max_steps));
    return rcpp_result_gen;
END_RCPP
}
// carrying_capacity
double carrying_capacity(const size_t timestep, const bool model_seasonality, const double g0, const std::vector<double>& g, const std::vector<double>& h, const double K0, const double R_bar, const double rainfall_floor);
RcppExport SEXP _malariasimulation_carrying_capacity(SEXP timestepSEXP, SEXP model_seasonalitySEXP, SEXP g0SEXP, SEXP gSEXP, SEXP hSEXP, SEXP K0SEXP, SEXP R_barSEXP, SEXP rainfall_floorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const size_t >::type timestep(timestepSEXP);
    Rcpp::traits::input_parameter< const bool >::type model_seasonality(model_seasonalitySEXP);
    Rcpp::traits::input_parameter< const double >::type g0(g0SEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< const double >::type R_bar(R_barSEXP);
    Rcpp::traits::input_parameter< const double >::type rainfall_floor(rainfall_floorSEXP);
    rcpp_result_gen = Rcpp::wrap(carrying_capacity(timestep, model_seasonality, g0, g, h, K0, R_bar, rainfall_floor));
    return rcpp_result_gen;
END_RCPP
}
// eggs_laid
double eggs_laid(double beta, double mu, double f);
RcppExport SEXP _malariasimulation_eggs_laid(SEXP betaSEXP, SEXP muSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(eggs_laid(beta, mu, f));
    return rcpp_result_gen;
END_RCPP
}
// rainfall
double rainfall(const size_t t, const double g0, const std::vector<double>& g, const std::vector<double>& h, const double floor);
RcppExport SEXP _malariasimulation_rainfall(SEXP tSEXP, SEXP g0SEXP, SEXP gSEXP, SEXP hSEXP, SEXP floorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const size_t >::type t(tSEXP);
    Rcpp::traits::input_parameter< const double >::type g0(g0SEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double >::type floor(floorSEXP);
    rcpp_result_gen = Rcpp::wrap(rainfall(t, g0, g, h, floor));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_states
std::vector<double> solver_get_states(Rcpp::XPtr<Solver> solver);
RcppExport SEXP _malariasimulation_solver_get_states(SEXP solverSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<Solver> >::type solver(solverSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_states(solver));
    return rcpp_result_gen;
END_RCPP
}
// solver_step
void solver_step(Rcpp::XPtr<Solver> solver);
RcppExport SEXP _malariasimulation_solver_step(SEXP solverSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<Solver> >::type solver(solverSEXP);
    solver_step(solver);
    return R_NilValue;
END_RCPP
}
// create_timeseries
Rcpp::XPtr<Timeseries> create_timeseries(size_t size, double default_value);
RcppExport SEXP _malariasimulation_create_timeseries(SEXP sizeSEXP, SEXP default_valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< size_t >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type default_value(default_valueSEXP);
    rcpp_result_gen = Rcpp::wrap(create_timeseries(size, default_value));
    return rcpp_result_gen;
END_RCPP
}
// timeseries_at
double timeseries_at(Rcpp::XPtr<Timeseries> timeseries, double timestep, bool linear);
RcppExport SEXP _malariasimulation_timeseries_at(SEXP timeseriesSEXP, SEXP timestepSEXP, SEXP linearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<Timeseries> >::type timeseries(timeseriesSEXP);
    Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP);
    Rcpp::traits::input_parameter< bool >::type linear(linearSEXP);
    rcpp_result_gen = Rcpp::wrap(timeseries_at(timeseries, timestep, linear));
    return rcpp_result_gen;
END_RCPP
}
// timeseries_push
void timeseries_push(Rcpp::XPtr<Timeseries> timeseries, double value, double timestep);
RcppExport SEXP _malariasimulation_timeseries_push(SEXP timeseriesSEXP, SEXP valueSEXP, SEXP timestepSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<Timeseries> >::type timeseries(timeseriesSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP);
    timeseries_push(timeseries, value, timestep);
    return R_NilValue;
END_RCPP
}
// random_seed
void random_seed(size_t seed);
RcppExport SEXP _malariasimulation_random_seed(SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< size_t >::type seed(seedSEXP);
    random_seed(seed);
    return R_NilValue;
END_RCPP
}
// bernoulli_multi_p_cpp
std::vector<size_t> bernoulli_multi_p_cpp(const std::vector<double> p);
RcppExport SEXP _malariasimulation_bernoulli_multi_p_cpp(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(bernoulli_multi_p_cpp(p));
    return rcpp_result_gen;
END_RCPP
}
// bitset_index_cpp
std::vector<size_t> bitset_index_cpp(Rcpp::XPtr<individual_index_t> a, Rcpp::XPtr<individual_index_t> b);
RcppExport SEXP _malariasimulation_bitset_index_cpp(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<individual_index_t> >::type a(aSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<individual_index_t> >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(bitset_index_cpp(a, b));
    return rcpp_result_gen;
END_RCPP
}
// fast_weighted_sample
Rcpp::IntegerVector fast_weighted_sample(size_t size, std::vector<double> probs);
RcppExport SEXP _malariasimulation_fast_weighted_sample(SEXP sizeSEXP, SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< size_t >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_weighted_sample(size, probs));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP run_testthat_tests();

static const R_CallMethodDef CallEntries[] = {
    {"_malariasimulation_create_adult_mosquito_model", (DL_FUNC) &_malariasimulation_create_adult_mosquito_model, 5},
    {"_malariasimulation_adult_mosquito_model_update", (DL_FUNC) &_malariasimulation_adult_mosquito_model_update, 5},
    {"_malariasimulation_create_adult_solver", (DL_FUNC) &_malariasimulation_create_adult_solver, 5},
    {"_malariasimulation_create_aquatic_mosquito_model", (DL_FUNC) &_malariasimulation_create_aquatic_mosquito_model, 18},
    {"_malariasimulation_aquatic_mosquito_model_update", (DL_FUNC) &_malariasimulation_aquatic_mosquito_model_update, 4},
    {"_malariasimulation_create_aquatic_solver", (DL_FUNC) &_malariasimulation_create_aquatic_solver, 5},
    {"_malariasimulation_carrying_capacity", (DL_FUNC) &_malariasimulation_carrying_capacity, 8},
    {"_malariasimulation_eggs_laid", (DL_FUNC) &_malariasimulation_eggs_laid, 3},
    {"_malariasimulation_rainfall", (DL_FUNC) &_malariasimulation_rainfall, 5},
    {"_malariasimulation_solver_get_states", (DL_FUNC) &_malariasimulation_solver_get_states, 1},
    {"_malariasimulation_solver_step", (DL_FUNC) &_malariasimulation_solver_step, 1},
    {"_malariasimulation_create_timeseries", (DL_FUNC) &_malariasimulation_create_timeseries, 2},
    {"_malariasimulation_timeseries_at", (DL_FUNC) &_malariasimulation_timeseries_at, 3},
    {"_malariasimulation_timeseries_push", (DL_FUNC) &_malariasimulation_timeseries_push, 3},
    {"_malariasimulation_random_seed", (DL_FUNC) &_malariasimulation_random_seed, 1},
    {"_malariasimulation_bernoulli_multi_p_cpp", (DL_FUNC) &_malariasimulation_bernoulli_multi_p_cpp, 1},
    {"_malariasimulation_bitset_index_cpp", (DL_FUNC) &_malariasimulation_bitset_index_cpp, 2},
    {"_malariasimulation_fast_weighted_sample", (DL_FUNC) &_malariasimulation_fast_weighted_sample, 2},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_malariasimulation(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
